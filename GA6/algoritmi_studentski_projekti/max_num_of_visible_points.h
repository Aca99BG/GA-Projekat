#ifndef MAXNUMOFVISIBLEPOINTS_H
#define MAXNUMOFVISIBLEPOINTS_H

#include "algoritambaza.h"
#include <vector>
#include <cmath>

class MaxNumOfVisiblePoints : public AlgoritamBaza
{
public:
    MaxNumOfVisiblePoints(QWidget *pCrtanje,
                          int pauzaKoraka,
                          const bool &naivni = false,
                          std::string imeDatoteke = "",
                          int brojTacaka = BROJ_SLUCAJNIH_OBJEKATA);

    void pokreniAlgoritam() override;
    void crtajAlgoritam(QPainter *painter) const override;
    void pokreniNaivniAlgoritam() override;
    void crtajNaivniAlgoritam(QPainter *painter) const override;

    std::vector<double> visiblePoints(const std::vector<QPoint>& points, double angle, const QPoint& location);

    inline void setBestAngle(double angle) { _bestStartAngle = angle; }

private:
    int _arc;
    std::vector<QPoint> _points;
    double _angle;
    QPoint _location;
    double _bestStartAngle;
};

#endif // MAXNUMOFVISIBLEPOINTS_H
