#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Brain::Brain(){
    std::cout << "Braind Default Constructor Called! " << std::endl;
        
    int i = 0;
    while(i < 100)
    {
        this->ideas[i] = "Brain! Dou you need an idea ?\n";
        i++;
    }

}

Brain::Brain(const Brain& obj){
    std::cout << "Brain Copy Constructor Called ! " << std::endl;
    *this = obj;
}

Brain::~Brain(){

}

Brain& Brain::operator=(const Brain& obj){

    std::cout << "Brain Operator Assignment Called ! " << std::endl;
    if ( this != &obj ) 
    {
        for ( int i = 0; i < 100; i++ ) 
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    return *this;
}
