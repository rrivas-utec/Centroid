#include "include/Position.h"

std::ostream& operator<<(std::ostream& out, const Position& p) {
    out << "x: " << p.x << " " << "y: " << p.y;
    return out;
}