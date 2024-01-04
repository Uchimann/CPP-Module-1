#include "Weapon.hpp"
#include "HumanB.hpp"

void HumanB::attack(){
    std::cout << this->name <<  " attacks with their " << this->wp->getType() << std::endl;
}

HumanB::HumanB(std::string name){
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapon){
    this->wp = &weapon;
}