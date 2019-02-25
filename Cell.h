#ifndef PIZZA_HASHCODE_CELL_H
#define PIZZA_HASHCODE_CELL_H


#include "Slice.h"

class Cell {
public:
    bool isMushroom;
    bool isPartOfSlice;
    Slice* slice;

    Cell(bool isMushroom);
    Cell();

};


#endif //PIZZA_HASHCODE_CELL_H
