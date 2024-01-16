#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    if(this != &copy)
        *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy){
    std::cout << "WrongAnimal Operator Assigment Called" << std::endl;
    if(this != &copy)
        this->type = copy.type;
    return(*this);
}

void WrongAnimal::MakeSound() const{
    std::cout << "WrongAnimal MakeSound called! WRONG ANIMAL !" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (this->type);
}