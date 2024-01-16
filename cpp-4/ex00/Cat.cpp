#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat & obj){
    std::cout << "Cat Operator ASsigment Called" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this;
}

Cat::Cat(const Cat & copy) : Animal(copy){
    std::cout << "Cat Copy Constructor Called" << std::endl;
    if(this != &copy)
        *this = copy;
}

void Cat::MakeSound()const{
    std::cout << "Cat MakeSound called! CAT MEOW ! " << std::endl;
}

