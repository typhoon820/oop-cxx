#ifndef OOP_SHAPECOMPARATORS_H
#define OOP_SHAPECOMPARATORS_H

#include "Shape.h"

class ComparatorByLineWeight {
public:
    bool operator()(Shape *a, Shape *b) {
        return a->getLineweight() < b->getLineweight();
    }
};

#endif //OOP_SHAPECOMPARATORS_H
