#pragma once
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

    private:
        //std::string type;
    public:
        WrongCat();
        WrongCat(const WrongCat& copy);
        WrongCat& operator=(const WrongCat& copy);
        virtual ~WrongCat();

        void MakeSound() const;
        std::string getType() const;
};