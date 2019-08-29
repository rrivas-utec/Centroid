#include "include/Ellipse.h"

Ellipse::Ellipse(const Position& center, const double& major, const double& minor):
    center{center},
    major{major},
    minor{minor},
    area{calculate_area()} {
}

double Ellipse::calculate_area() {
    return major * minor * PI;
}

const Position &Ellipse::get_centroid() const {
    return center;
}

const double &Ellipse::get_area() const {
    return area;
}
