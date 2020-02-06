#include <iostream>
#include <ostream>
#include <string>

class Clidraw 
{
public:
    class Grid;
};

class Clidraw::Grid {
    public:
    void whitespace(int);
    void fill(std::string, int);
    int box(int, int, int, int);
    void dot(std::string, int, int);
};
int Clidraw::Grid::box(int x, int y, int width, int height) {
    return 0;
} void Clidraw::Grid::dot(std::string c, int x, int y) {
    //Enter down for y value
    for (int i = 0; i <= x; i++)
    {
        std::cout << std::endl;        
    }
    
    whitespace(x);

    std::cout << c << std::endl << std::endl;
    
} void Clidraw::Grid::whitespace(int n_spc) {

    for (int i = 1; i <= n_spc; i++) {
        std::cout << " " ;
    }
} void Clidraw::Grid::fill(std::string c, int n) {

    for (int i = 1; i <= n; i++) {
        std::cout << c;
    }
}
