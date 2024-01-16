#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructor Called" << std::endl;
}

Dog& Dog::operator=(const Dog & obj){
    std::cout << "Dog Operator ASsigment Called" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this;
}

Dog::Dog(const Dog & copy) : Animal(copy){
    std::cout << "Dog Copy Constructor Called" << std::endl;
    if(this != &copy)
        *this = copy;
}

void Dog::MakeSound()const{
    std::cout << "Dog MakeSound called! DOG BARK ! " << std::endl;
}
