#ifndef COMPOSITEAREA_H
#define COMPOSITEAREA_H

#include <initializer_list>
#include <vector>
#include "Figure.h"

enum class SectionAction {Add=1, Remove=-1};
using Section = std::pair <std::shared_ptr<Figure>, SectionAction>;

class CompositeArea : public Figure
{
private:
    std::vector<Section> sections;
    Position centroid;
    double area;
    Position calculate_centroid();
    double calculate_area();
public:
    CompositeArea(std::initializer_list<Section>);
    const Position& get_centroid() const override;
    const double& get_area() const override;
};

#endif
