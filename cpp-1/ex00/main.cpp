#include "Zombie.hpp"

int main()
{
    Zombie zombieOne("Guardian Zombie");
    Zombie zombieTwo("Smart Zombie");
    zombieOne.announce();
    Zombie *pZombie = newZombie("Wild Zombie");
    pZombie->announce();
    zombieTwo.announce();
    delete pZombie;
    RandomChump("Strong Zombie");
    return (0);
}
