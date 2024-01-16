#pragma once
#include <iostream>

class Animal{
    protected:
            std::string type;
    public:
            Animal();
            virtual ~Animal();
            Animal& operator=(const Animal&);
            Animal(const Animal&);
            virtual void MakeSound()const = 0;
            std::string getType()const;
};
