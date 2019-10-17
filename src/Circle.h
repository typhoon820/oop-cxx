//
// Created by typhoon on 28.09.19.
//

#ifndef OOP_CIRCLE_H
#define OOP_CIRCLE_H


#include "Shape.h"

class Circle : public Shape {
private:
    std::pair<int, int> center;
    int radius;
public:
    virtual ~Circle();

    Circle();

    Circle(std::ifstream &);

    const std::pair<int, int> &getCenter() const;

    void setCenter(const std::pair<int, int> &center);

    int getRadius() const;

    void setRadius(int radius);

    void draw(std::ostream &out) const override;
};


#endif //OOP_CIRCLE_H
