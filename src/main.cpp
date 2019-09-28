#include <iostream>
#include <algorithm>
#include "Figures.h"
#include "ShapeComparators.h"

int main() {
    Figures figures("figures.txt");
    figures.print(std::cout);
    std::vector<Shape*> shapes = figures.getShapes();
    std::sort(shapes.begin(), shapes.end(), ComparatorByLineWeight());
    figures.setShapes(shapes);
    std::ofstream fout("result.txt");
    figures.print(fout);
}