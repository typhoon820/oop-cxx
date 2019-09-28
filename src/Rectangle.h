//
// Created by typhoon on 28.09.19.
//

#ifndef OOP_RECTANGLE_H
#define OOP_RECTANGLE_H


#include <utility>
#include "Shape.h"

class Rectangle: public Shape {
private:
    std::pair<int, int> leftBottomAngle;
    std::pair<int, int> rightTopAngle;
public:
    Rectangle();
    Rectangle(std::ifstream &);

    const std::pair<int, int> &getLeftBottomAngle() const;
    void setLeftBottomAngle(const std::pair<int, int> &leftBottomAngle);
    const std::pair<int, int> &getRightTopAngle() const;
    void setRightTopAngle(const std::pair<int, int> &rightTopAngle);

    void draw(std::ostream& out) const override;
};


#endif //OOP_RECTANGLE_H
