#include "Zombie.hpp"

void RandomChump(std::string name){
    Zombie a(name);
    a.set_name(name);
    a.announce();
}