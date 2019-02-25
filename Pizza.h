#ifndef PIZZA_HASHCODE_PIZZA_H
#define PIZZA_HASHCODE_PIZZA_H


#include "Slice.h"
#include "Cell.h"
#include "Pos.h"
#include <vector>

using namespace std;

class Pizza {
public:
    vector<vector<Cell>> cells;
    vector<Slice> slices;
    bool didMakeSlice;
    int x;
    int y;
    Pizza(int x, int y);

    void createSlice(Slice slice);
    void replaceSlice(int index, Slice slice);
    int sum();
    Pos getNextCell();
    Pos getHighestCell(int col);

};


#endif //PIZZA_HASHCODE_PIZZA_H
