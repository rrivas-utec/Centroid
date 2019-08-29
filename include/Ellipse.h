#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Figure.h"
#include "Position.h"

class Ellipse : public Figure
{
private:
    Position center;
    double major;
    double minor;
    double area;
    double calculate_area();
public:
    Ellipse(const Position&, const double&, const double&);
    const Position& get_centroid() const override;
    const double& get_area() const override;
};

#endif