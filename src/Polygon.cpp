//
// Created by rudri on 8/29/2019.
//

#include "include/Polygon.h"


Polygon::Polygon(std::initializer_list<Position> positions):
        vertexes {positions},
        centroid {calculate_centroid()},
        area {calculate_area()} {
}

Position Polygon::calculate_centroid() {
    double     x = 0;
    double     y = 0;
    const int& n = vertexes.size();
    for (const Position& vertex : vertexes) {
        x += vertex.x;
        y += vertex.y;
    }
    return Position {x / n, y / n};
}

double Polygon::calculate_area() {
    double p0 = 0;
    double p1 = 0;
    auto first = begin(vertexes);
    auto second = first + 1;
    for (auto iter = second; iter != end(vertexes); ++iter, ++first) {
        p0 += first->x * iter->y;
        p1 += first->y * iter->x;
    }
    p0 += vertexes.back().x * vertexes.front().y;
    p1 += vertexes.back().y * vertexes.front().x;
    return std::abs((p0 - p1) / 2);
}

const Position &Polygon::get_centroid() const {
    return centroid;
}

const double &Polygon::get_area() const {
    return area;
}
