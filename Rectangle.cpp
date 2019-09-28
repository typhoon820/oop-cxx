//
// Created by typhoon on 28.09.19.
//

#include "Rectangle.h"

Rectangle::Rectangle() {}

const std::pair<int, int> &Rectangle::getLeftBottomAngle() const {
    return leftBottomAngle;
}

void Rectangle::setLeftBottomAngle(const std::pair<int, int> &leftBottomAngle) {
    Rectangle::leftBottomAngle = leftBottomAngle;
}

const std::pair<int, int> &Rectangle::getRightTopAngle() const {
    return rightTopAngle;
}

void Rectangle::setRightTopAngle(const std::pair<int, int> &rightTopAngle) {
    Rectangle::rightTopAngle = rightTopAngle;
}

void Rectangle::draw(std::ostream& out) const {
    out << "I am a " << this->getColor() << " with angles at "
        << toString(this->leftBottomAngle) << " and " << toString(this->rightTopAngle) << std::endl;
}

Rectangle::Rectangle(std::ifstream &stream) : Shape(stream) {
    std::string leftBottom;
    std::string rightTop;
    std::getline(stream, leftBottom);
    std::getline(stream, rightTop);
    this->leftBottomAngle.first = stoi(split(leftBottom, ' ')[0]);
    this->leftBottomAngle.second = stoi(split(leftBottom, ' ')[1]);
    this->rightTopAngle.first = stoi(split(rightTop, ' ')[0]);
    this->leftBottomAngle.second = stoi(split(rightTop, ' ')[1]);
    std::getline(stream, rightTop);
}
