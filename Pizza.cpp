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

void Pizza::replaceSlice(int index) {

}

int Pizza::sum() {
    return 0;
}

Pizza::Pizza(int x, int y): x(x), y(y) {}
