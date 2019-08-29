#include <iostream>
#include <iomanip>
#include <string>
#include "include/Figure.h"

const double PI = 3.141592653;

std::ostream &operator<<(std::ostream &os, const Figure &figure) {
    os << "area : " << std::fixed << std::setprecision(2) << figure.get_area() << std::endl;
    os << "x    : " << figure.get_centroid().x << std::endl;
    os << "y    : " << figure.get_centroid().y << std::endl;
    return os;
}
