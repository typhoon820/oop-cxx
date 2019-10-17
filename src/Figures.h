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
    virtual ~Figures();

    explicit Figures(const std::string& filePath);

    std::vector<Shape *> &getShapes();

    void setShapes(std::vector<Shape *> &shapes);

    const std::string &getName() const;
    void setName(const std::string &name);

    void sort();
    void print(std::ostream& out);
};


#endif //OOP_FIGURES_H
