#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat(){
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat & obj){

    std::cout << "Brain Operator Assignment Called ! " << std::endl;
    this->type = obj.type;
	if(!this->brain)
    	this->brain = new Brain();
    *this->brain = *obj.brain;
	return(*this);
}

Cat::Cat(const Cat & copy) : Animal(copy){
    std::cout << "Cat Copy Constructor Called" << std::endl;

    *this = copy;
}

void Cat::MakeSound()const{
    std::cout << "Cat MakeSound called! CAT MEOW ! " << std::endl;
}

std::string  *Cat::getBrain() const
{
    return (this->brain->ideas);
}
