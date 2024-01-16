#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "WrongCat";
    std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy){
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    if(this != &copy)
        *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy){
    std::cout << "WrongCat Operator Assigment Called" << std::endl;
    if(this != &copy)
        this->type = copy.type;
    return(*this);
}

void WrongCat::MakeSound() const{
    std::cout << "WrongCat MakeSound called! WRONGCAT !" << std::endl;
}

std::string WrongCat::getType() const{
    return this->type;
}