#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
    private:
    
    public:
            Dog();
            ~Dog();
            Dog& operator=(const Dog&);
            Dog (const Dog&);
            void MakeSound()const;
};