#include "max_num_of_visible_points.h"
#include "qpainterpath.h"
#include <algorithm>
#include <cmath>
#include <QWidget>

MaxNumOfVisiblePoints::MaxNumOfVisiblePoints(QWidget *pCrtanje,
                                             int pauzaKoraka,
                                             const bool &naivni,
                                             std::string imeDatoteke,
                                             int brojTacaka)
    : AlgoritamBaza(pCrtanje, pauzaKoraka, naivni), _arc(40), _angle(0), _bestStartAngle(-1)
{
    if (imeDatoteke.empty())
        _points = generisiNasumicneTacke(brojTacaka);
    else
        _points = ucitajPodatkeIzDatoteke(imeDatoteke);
    _location = QPoint(100,100);
}

void MaxNumOfVisiblePoints::pokreniAlgoritam() {
    std::vector<double> angles = visiblePoints(_points, _arc, _location);

    for (const auto& angle : angles) {
        _angle = angle;
        if (_angle < 360) {
            AlgoritamBaza_updateCanvasAndBlock();
        }
    }

    _angle = _bestStartAngle;
    AlgoritamBaza_updateCanvasAndBlock();
    emit animacijaZavrsila();
}

void MaxNumOfVisiblePoints::crtajAlgoritam(QPainter *painter) const {
    if (!painter) return;

    int maxRadius = 2000;
    auto pen = painter->pen();

    painter->setBrush(QBrush(Qt::yellow));
    painter->setPen(Qt::NoPen);
    QPainterPath path;
    path.moveTo(_location);
    path.arcTo(_location.x() - maxRadius, _location.y() - maxRadius,
               2 * maxRadius, 2 * maxRadius, 360 - _angle, -_arc);
    painter->drawPath(path);

    pen.setColor(Qt::green);
    painter->setPen(pen);
    painter->drawPoint(_location);

    pen.setColor(Qt::red);
    painter->setPen(pen);
    for (const auto& point : _points) {
        painter->drawPoint(point);
    }
}

void MaxNumOfVisiblePoints::pokreniNaivniAlgoritam() {
    emit animacijaZavrsila();
}

void MaxNumOfVisiblePoints::crtajNaivniAlgoritam(QPainter *painter) const {
    if (!painter) return;
}

std::vector<double> MaxNumOfVisiblePoints::visiblePoints(const std::vector<QPoint>& points, double angle, const QPoint& location) {
    std::vector<double> possible_angles;
    int at_start = 0;

    for (const auto& point : points) {
        if (point == location)
            at_start++;
        else {
            double ang = atan2(point.y() - location.y(), point.x() - location.x()) * 180.0 / M_PI;
            ang = fmod(ang + 360, 360);
            possible_angles.push_back(ang);
        }
    }

    std::sort(possible_angles.begin(), possible_angles.end());
    int n = possible_angles.size();

    int l = 0, ret = 0;
    for (int i = 0; i < n; i++)
        possible_angles.push_back(possible_angles[i] + 360);

    for (int r = 0; r < possible_angles.size(); r++) {
        while ((possible_angles[r] - possible_angles[l]) > angle) {
            l++;
        }
        int current_count = r - l + 1;
        if (current_count > ret) {
            ret = current_count;
            setBestAngle(possible_angles[l]);
        }
    }

    std::cout << "Best starting angle that has " << ret + at_start <<  " points inside is: " << _bestStartAngle << std::endl;
    return possible_angles;
}
