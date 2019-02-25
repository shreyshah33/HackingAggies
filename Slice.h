#ifndef PIZZA_HASHCODE_SLICE_H
#define PIZZA_HASHCODE_SLICE_H


#include "Pos.h"

class Slice {

    int size;

    Slice(Pos topLeft, Pos bottomRight);

public:
    Pos topLeft;
    Pos bottomRight;
};


#endif //PIZZA_HASHCODE_SLICE_H
