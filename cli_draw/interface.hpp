#include <iostream>
#include <ostream>
#include <string>

class Clidraw
{
public:
    class Grid;
};

class Clidraw::Grid
{
public:
    void whitespace(int);
    void fill(std::string, int);
    int box(int, int, int, int);
    void dot(std::string, int, int);
    int rect(int, int, int, int);
};
int Clidraw::Grid::box(int x, int y, int width, int height)
{
    return 0;
}
void Clidraw::Grid::dot(std::string c, int x, int y)
{
    //Enter down for y value
    for (int i = 0; i <= y; i++)
    {
        std::cout << std::endl;
    }

    whitespace(x);

    std::cout << c << std::endl
              << std::endl;
}
void Clidraw::Grid::whitespace(int n_spc)
{

    for (int i = 1; i <= n_spc; i++)
    {
        std::cout << " ";
    }
}
void Clidraw::Grid::fill(std::string c, int n)
{

    for (int i = 1; i <= n; i++)
    {
        std::cout << c;
    }
}
int Clidraw::Grid::rect(int x, int y, int width, int height)
{
    //Space out x

    for (int i = 0; i <= y; i++)
    {
        //space out y
        std::cout << std::endl;
    }

    whitespace(x);

    for (int i = 0; i <= height; i++)
    {
        // draw x
        if (i == 0 || i == height)
        {
            fill("--", width);
            std::cout << std::endl;
        }
        else if (i != 0 || i != height)
        {
            std::cout << "|";
            whitespace(2 * (width - 1));
            std::cout << "|";
            std::cout << std::endl;
        }
    }
    return 0;
}