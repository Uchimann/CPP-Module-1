#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog Destructor Called" << std::endl;
}

Dog& Dog::operator=(const Dog & obj){
    std::cout << "Dog Operator ASsigment Called" << std::endl;
    this->type = obj.type;
	if(!this->brain)
    	this->brain = new Brain();
    *this->brain = *obj.brain;
	return(*this);
}

Dog::Dog(const Dog& copy) : Animal(copy){
    std::cout << "Dog Copy Constructor Called" << std::endl;
    *this = copy;
}

void Dog::MakeSound()const{
    std::cout << "Dog MakeSound called! DOG BARK ! " << std::endl;
}

std::string  *Dog::getBrain() const
{
    return (this->brain->ideas);
}