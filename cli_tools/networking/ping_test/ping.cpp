//urls: https://docs.oracle.com/cd/E19455-01/806-0916/6ja85399u/index.html

#include "../network.h"

int main()
{
    int ip[4]{};

    for (int i = 0; i <= 3; i++)
    {
        std::cout << "enter part " << i + 1 << " of the ip address: ";
        std::cin >> ip[i];
    }
    std::cout << std::endl
              << "here it is: " << ip[0] << "." << ip[1] << "." << ip[2] << "." << ip[3] << std::endl;
}