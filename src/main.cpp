#include <iostream>
#include <algorithm>
#include "Figures.h"
#include "ShapeComparators.h"
#include "Circle.h"

void deleteCircle(Figures *figures, int radius) {
    for (int i = 0; i < figures->getShapes().size(); i++) {
        if (auto *c = dynamic_cast<Circle *>(figures->getShapes()[i])) {
            if (c->getRadius() < radius) {
                figures->getShapes().erase(figures->getShapes().begin() + i);
            }
        }
    }
}


int main() {
    Figures *figures = new Figures("figures.txt");
    figures->print(std::cout);
    std::vector<Shape *> shapes = figures->getShapes();
    std::sort(shapes.begin(), shapes.end(), ComparatorByLineWeight());
    figures->setShapes(shapes);
    std::ofstream fout("result.txt");
    figures->print(fout);
    deleteCircle(figures, 3);
    figures->print(std::cout);
}