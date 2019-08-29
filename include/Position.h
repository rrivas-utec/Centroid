#ifndef POSITION_H
#define POSITION_H

#include <ostream>

struct Position
{
    double x;
    double y;
    friend std::ostream& operator<<(std::ostream& out, const Position& p);
};

#endif
