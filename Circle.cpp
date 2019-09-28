#include "Circle.h"

Circle::Circle() {}

Circle::Circle(std::ifstream& stream) : Shape(stream){
    std::string center;
    std::string radius;
    std::getline(stream, center);
    std::getline(stream, radius);
    this->center.first = stoi(split(center, ' ')[0]);
    this->center.second = stoi(split(center, ' ')[1]);
    this->radius = stoi(radius);
    std::getline(stream, radius);
}

const std::pair<int, int> &Circle::getCenter() const {
    return center;
}

void Circle::setCenter(const std::pair<int, int> &center) {
    Circle::center = center;
}

int Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(int radius) {
    Circle::radius = radius;
}

void Circle::draw(std::ostream& out) const {
    std::string output = "I am %s circle of radius %d\n";
    out<< "I am " << this->getColor() << " circle of radius " << this->getRadius() << std::endl;
}
