#include "max_num_of_visible_points.h"

MaxNumOfVisiblePoints::MaxNumOfVisiblePoints(QWidget *pCrtanje,
                                             int pauzaKoraka,
                                             const bool &naivni,
                                             const std::vector<std::vector<int>>& points,
                                             int angle)
    : AlgoritamBaza(pCrtanje, pauzaKoraka, naivni),
    points(points),
    angle(angle)
{
    // Calculate angles for each point relative to the east (positive X-axis)
    for (const auto& point : points) {
        angles.push_back(calculateAngle(point[0], point[1]));
    }
    std::sort(angles.begin(), angles.end());
}

void MaxNumOfVisiblePoints::pokreniAlgoritam()
{
    // Create extended list of angles to account for wraparound
    std::vector<double> extendedAngles = angles;
    for (const auto& angle : angles) {
        extendedAngles.push_back(angle + 2 * M_PI); // Wraparound for angles > 360 degrees
    }

    int maxPointsVisible = 0;

    for (size_t i = 0; i < angles.size(); ++i) {
        // Calculate visible points for each starting angle
        double lowerBound = angles[i] - angle * M_PI / 180.0 / 2.0;
        double upperBound = angles[i] + angle * M_PI / 180.0 / 2.0;

        // Sliding window to count points within the angle range
        int count = 0;
        for (size_t j = i; j < extendedAngles.size(); ++j) {
            if (extendedAngles[j] >= lowerBound && extendedAngles[j] <= upperBound) {
                count++;
            }
            if (extendedAngles[j] > upperBound) {
                break;
            }
        }

        maxPointsVisible = std::max(maxPointsVisible, count);
    }

    // Display or emit the result (can replace with visual updates or signals)
    std::cout << "Maximum points visible: " << maxPointsVisible << std::endl;

    emit animacijaZavrsila();
}

void MaxNumOfVisiblePoints::crtajAlgoritam(QPainter *painter) const
{
    if (!painter) return;

    // Optional: Draw the angles and the points
    QPen p = painter->pen();
    p.setColor(Qt::green);
    p.setWidth(2);
    painter->setPen(p);

    // Drawing all points as dots
    for (const auto& point : points) {
        painter->drawPoint(point[0], point[1]);
    }

    // Optional: Draw the visible field of view (angle range)
    painter->drawText(10, 10, "Angle of View: " + QString::number(angle) + "°");
}

void MaxNumOfVisiblePoints::pokreniNaivniAlgoritam()
{
    // For a naive algorithm (if any), we can just emit the end of the animation
    emit animacijaZavrsila();
}

void MaxNumOfVisiblePoints::crtajNaivniAlgoritam(QPainter *painter) const
{
    if (!painter) return;

    // Optional: Add a simpler drawing for the naive algorithm
    // For example, drawing all points without any angle filtering
    QPen p = painter->pen();
    p.setColor(Qt::blue);
    p.setWidth(3);
    painter->setPen(p);

    for (const auto& point : points) {
        painter->drawPoint(point[0], point[1]);
    }
}
