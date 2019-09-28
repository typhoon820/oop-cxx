#include "Shape.h"

Shape::Shape(const std::string &color, int lineweight) : color(color), lineweight(lineweight) {}

Shape::Shape() {}

Shape::Shape(std::ifstream& stream) {
    std::string line;
    std::getline(stream, this->color);
    std::getline(stream, line);
    this->lineweight = std::stoi(line);
}

const std::string &Shape::getColor() const {
    return color;
}

void Shape::setColor(const std::string &color) {
    Shape::color = color;
}

int Shape::getLineweight() const {
    return lineweight;
}

void Shape::setLineweight(int lineweight) {
    Shape::lineweight = lineweight;
}

bool Shape::operator<(const Shape &rhs) const {
    return lineweight < rhs.lineweight;
}


