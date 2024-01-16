#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void microphone(Animal *ptr){
    ptr->MakeSound();
}

int main() {
    Animal *a = new Dog();
    Animal *b = new Cat();

    microphone(a);
    microphone(b);
    delete a;
    delete b;
}
