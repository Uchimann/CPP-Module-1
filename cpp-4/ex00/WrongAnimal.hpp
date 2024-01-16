#pragma once
#include <iostream>
#include <string>

class WrongAnimal{

    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& copy);
        virtual ~WrongAnimal();

        void MakeSound() const;
        std::string getType() const;
};
