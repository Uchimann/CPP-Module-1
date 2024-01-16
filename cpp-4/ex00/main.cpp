#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){

        const Animal* meta = new Animal(); 
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << "------------------------------------------" << std::endl;

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;

        std::cout << "------------------------------------------" << std::endl;

        i->MakeSound(); //will output the cat sound!
        j->MakeSound();
        meta->MakeSound();

        std::cout << "------------------------------------------" << std::endl;
        

        delete meta;
        delete j;
        delete i;
        

        std::cout << "-------------WRONG ANIMAL------------" << std::endl;
        const WrongAnimal* wrong = new WrongCat();
        wrong->MakeSound();

        std::cout << "------------------------------------------" << std::endl;

        std::cout << wrong->getType() << std::endl; // burda neden wronganimal geliyor type

        std::cout << "------------------------------------------" << std::endl;
        WrongCat a;
        std::cout << a.getType() << std::endl;

        std::cout << "------------------------------------------" << std::endl;
        delete wrong;

    return 0;
}
