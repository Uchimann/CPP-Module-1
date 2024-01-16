#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
            Brain* brain;
    public:
            Cat();
            ~Cat();
            Cat& operator=(const Cat&);
            Cat (const Cat&);
            void MakeSound()const;
            std::string *getBrain() const;
};
