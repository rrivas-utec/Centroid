#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <sstream>
#include <string>
#include "Position.h"

extern const double PI;

class Figure {
public:
    virtual const Position& get_centroid() const = 0;
    virtual const double& get_area() const = 0;
    friend std::ostream &operator<<(std::ostream &os, const Figure &figure);
};

#endif
