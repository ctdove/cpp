#include "interface.hpp"

int main () {
    Clidraw::Grid grid;
    grid.fill("@", 11);
    std::cout << std::endl;
    grid.dot("n", 3, 1);
    grid.fill("-", 20);
    std::cout << std::endl;
    grid.rect(0, 0, 5, 5);
    return 0;
};