#include "interface.h"
#include <ostream>

int main()
{
    int width, height;
    std::cout << "enter width: ";
    std::cin >> width;
    std::cout << std::endl
              << "enter height: ";
    std::cin >> height;
    std::cout << std::endl;
    Clidraw::Grid grid;

    grid.rect(0, 0, width, height);
    return 0;
};