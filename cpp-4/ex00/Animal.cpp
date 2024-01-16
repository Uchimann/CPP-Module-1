#include "Animal.hpp"

Animal::Animal(){
    this->type  = "Animal";
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal Destructor Called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj){
    std::cout << "Animal Operator ASsigment Called" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this;
}

std::string Animal::getType()const{
    return this->type;
}

Animal::Animal(const Animal& copy){
    std::cout << "Animal Copy Constructor Called" << std::endl;
    if(this != &copy)
        *this = copy;
}

void Animal::MakeSound()const{
    std::cout << "Animal MakeSound called! ANIMAL! " << std::endl;
}

