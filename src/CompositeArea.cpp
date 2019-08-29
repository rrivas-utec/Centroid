#include <initializer_list>
#include "include/CompositeArea.h"

CompositeArea::CompositeArea(std::initializer_list<Section> list_sections) {
    for (const auto& s: list_sections){
        sections.emplace_back(s);
    }
    centroid = calculate_centroid();
    area = calculate_area();
}

Position CompositeArea::calculate_centroid() {
    double _area = 0;
    double _x = 0;
    double _y = 0;
    for (const auto& s : sections) {
        const auto& c = s.first->get_centroid();
        const auto& a = s.first->get_area() * static_cast<float>(s.second);
        _x += c.x * a;
        _y += c.y * a;
        _area += a;
    }
    return Position {_x / _area, _y / _area };
}

double CompositeArea::calculate_area() {
    auto total = 0.0;
    for (const auto& s: sections)
        total += s.first->get_area() * static_cast<float>(s.second);
    return total;
}

const Position &CompositeArea::get_centroid() const {
    return centroid;
}

const double &CompositeArea::get_area() const {
    return area;
}
