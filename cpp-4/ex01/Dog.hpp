#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
            Brain* brain;
    public:
            Dog();
            ~Dog();
            Dog& operator=(const Dog&);
            Dog (const Dog&);
            void MakeSound()const;
            std::string *getBrain() const;
};