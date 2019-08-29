#ifndef POLYGON_H
#define POLYGON_H

#include <cmath>
#include <string>
#include <vector>
#include "Figure.h"
#include "Position.h"
#include <initializer_list>

class Polygon : public Figure
{
private:
    std::vector<Position> vertexes;
    Position centroid;
    double area;

    Position calculate_centroid();
    double calculate_area();
public:
    Polygon(std::initializer_list<Position>);
    const Position& get_centroid() const override;
    const double& get_area() const override;
};

#endif
