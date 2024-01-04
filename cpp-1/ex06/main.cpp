#include <iostream>
#include "Harl.hpp"

int main(int ac, char * av[])
{
    if(ac == 2)
    {
        Harl a;
        a.complain(av[1]);
    }
    else
        return (std::cout << "This program accept only 2 arguments!" << std::endl, -1);
}