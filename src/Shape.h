#ifndef OOP_SHAPE_H
#define OOP_SHAPE_H

#include <string>
#include <iostream>
#include <fstream>
#include "Utils.h"

class Shape {
private:
    std::string color;
    int lineweight;
public:
    virtual ~Shape();

    Shape(const std::string &color, int lineweight);

    Shape();

    explicit Shape(std::ifstream &);

    const std::string &getColor() const;

    void setColor(const std::string &color);

    int getLineweight() const;

    void setLineweight(int lineweight);

    virtual void draw(std::ostream &out) const {
    }

    bool operator<(const Shape &rhs) const;
};


#endif //OOP_SHAPE_H
