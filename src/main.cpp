#include <iostream>
#include <memory>
#include "include/CompositeArea.h"
#include "include/Polygon.h"
#include "include/Ellipse.h"

int main()
{
    auto triangle  = std::make_shared<Polygon>(Polygon{{0, 0}, {30, 20}, {30, 0}});
    auto rectangle = std::make_shared<Polygon>(Polygon{{30, 0}, {30, 20}, {60, 20}, {60, 0}});
    auto circle    = std::make_shared<Ellipse>(Ellipse{{45, 10}, 7.5, 7.5});

    std::cout << "Triangle:\n";
    std::cout << *triangle;
    std::cout << "\nRectangle:\n";
    std::cout << *rectangle;
    std::cout << "\nCircle:\n";
    std::cout << *circle;

    CompositeArea composite({
        Section {triangle,  SectionAction::Add},
        Section {rectangle, SectionAction::Add},
        Section {circle,    SectionAction::Remove}});

    std::cout << "\nComposite Area: " << std::endl;
    std::cout << composite;
    std::cout << std::endl;
}
