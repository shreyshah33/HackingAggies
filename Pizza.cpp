#include <stdexcept>
#include "Pizza.h"

void Pizza::createSlice(Slice slice) {
    didMakeSlice = true;
    slices.push_back(slice);
    for(int i = slice.topLeft.x; i < slice.bottomRight.x;i++) {
        for(int j = slice.topLeft.y; j < slice.bottomRight.y;j++) {
            if(cells.at(i).at(j).isPartOfSlice == true) throw runtime_error("slice overlaps another slice");
            cells.at(i).at(j).isPartOfSlice = true;
            cells.at(i).at(j).slice = &slice;
        }
    }
}

void Pizza::replaceSlice(int index, Slice slice) {
    for(int i = slice.topLeft.x; i < slice.bottomRight.x;i++) {
        for(int j = slice.topLeft.y; j < slice.bottomRight.y;j++) {
            if(cells.at(i).at(j).isPartOfSlice == true) throw runtime_error("slice overlaps another slice");
            cells.at(i).at(j).isPartOfSlice = true;
            cells.at(i).at(j).slice = &slice;
        }
    }
    slices.at(index) = slice;
}

int Pizza::sum() {
    int sum = 0;
    for(Slice slice: slices) {
        sum += (slice.bottomRight.x - slice.topLeft.x) * (slice.topLeft.y - slice.bottomRight.y);
    }
    return sum;
}

Pizza::Pizza(int x, int y): x(x), y(y) {
    cells.resize(x);
    for(vector<Cell> v: cells) {
        v.resize(y);
    }
}

Pos Pizza::getNextCell() {

    return Pos(0, 0);
}

Pos Pizza::getHighestCell(int col) {
    Pos out(-1,col);
    for(int row = 0; row < cells.size(); row++) {
        if(cells.at(row).at(col).isPartOfSlice) continue;
        out.x = row;
        break;

    }
    return out;
}
