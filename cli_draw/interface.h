#include <iostream>

class clidraw 
{
public:
    void whitespace(int);
};
void clidraw::whitespace(int n_spc) {

    for (int i = 1; i <= n_spc; i++) {
        std::cout << " " ;
    }
    std::cout << "end" << std::endl;
}