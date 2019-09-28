//
// Created by typhoon on 28.09.19.
//

#ifndef OOP_FIGURES_H
#define OOP_FIGURES_H


#include <vector>
#include "Shape.h"

class Figures {
private:
    std::vector<Shape*> shapes;
    std::string name;
public:
    explicit Figures(const std::string& filePath);

    const std::vector<Shape *> &getShapes() const;

    void setShapes(const std::vector<Shape *> &shapes);

    const std::string &getName() const;
    void setName(const std::string &name);

    void sort();
    void print(std::ostream& out);
};


#endif //OOP_FIGURES_H
