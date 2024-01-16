#pragma once
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
    private:

    public:
            Cat();
            ~Cat();
            Cat& operator=(const Cat&);
            Cat (const Cat&);
            void MakeSound()const;
};