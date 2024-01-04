#include "Zombie.hpp"
#include <iostream>

int main()
{
    int x = 8;

    Zombie *a = zombieHorde(x, "Test");
    
    for(int i = 0; i < x; i++)
        a[i].announce();
    
    delete[] a;
}