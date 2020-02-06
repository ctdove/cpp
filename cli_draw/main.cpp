#include "interface.h"

int main () {
    Clidraw::Grid grid;
    grid.fill("@", 11);
    std::cout << std::endl;
    grid.dot("n", 3, 1);
    return 0;
};