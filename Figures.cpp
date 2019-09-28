#include "Figures.h"
#include "Circle.h"
#include "Rectangle.h"

Figures::Figures(const std::string& filePath) {
    std::ifstream stream(filePath);
    if(stream.is_open()) {
        std::vector<Shape*> shapes;
        std::getline(stream, this->name);
        std::string type;
        std::getline(stream, type);
        while (!stream.eof()) {
            if (type == "Circle") {
                shapes.push_back(new Circle(stream));
            }
            if (type == "Rectangle") {
                shapes.push_back(new Rectangle(stream));
            }
            std::getline(stream, type);
        }
        this->shapes = shapes;
    }
}

const std::string &Figures::getName() const {
    return name;
}

void Figures::setName(const std::string &name) {
    Figures::name = name;
}

void Figures::sort() {

}

void Figures::print(std::ostream& out) {
    out << this->name << std::endl;
    for (auto const& shape: this->shapes){
        shape->draw(out);
    }
}

const std::vector<Shape *> &Figures::getShapes() const {
    return shapes;
}

void Figures::setShapes(const std::vector<Shape *> &shapes) {
    Figures::shapes = shapes;
}
