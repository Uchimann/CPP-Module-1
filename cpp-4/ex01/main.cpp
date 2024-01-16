#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {

     // Dog x;

    // Dog y(x);

    // return (0);

    std::cout << "<<<<<<<<<<POINTER DENEME <<<<<<<<<<<<<<<<<" << std::endl;
    Dog *y = new Dog();
    Dog *k = new Dog();

    *k = *y;

    delete y;
    std::cout << *k->getBrain() << std::endl;
    delete k;


    std::cout << "<<<<<<<<<<POINTER DENEME BITTI <<<<<<<<<<<<<<<<<" << std::endl;

    return 0;

    Dog a;
    Dog b;

    b = a;
    a.getBrain()[0] = "fdasfasd";
    
//    delete a;
    std::cout << "Helooooo! : "<< *(b.getBrain()) << std::endl;
   // return 0;

    //for (size_t i = 0; i < 100; i++)
     //{
       // std::cout << "ideas: " << *(b.getBrain() + 1) << std::endl;
     //}

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    int Acount = 7;

    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    Animal* animals[Acount];
    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

    std::cout << "<<<<<<<<<< FIRST FOR <<<<<<<<<<<<<<<" << std::endl;

    for (int i = 0; i < (Acount/2); i++)
    {
        animals[i] = new Dog();
    }
    std::cout << "<<<<<<<<<< SECOND FOR <<<<<<<<<<<<<<<" << std::endl;
     for (int i = (Acount/2); i < Acount; i++)
    {
        animals[i] = new Cat();
    }
    std::cout << "<<<<<<<<<< THIRD FOR <<<<<<<<<<<<<<<" << std::endl;
    for (int i = 0; i <Acount; i++)
    {
        animals[i]->MakeSound();
    }
    std::cout << "<<<<<<<<<< FORTH FOR <<<<<<<<<<<<<<<" << std::endl;
    for (int i = 0; i <Acount; i++)
    {
        std::cout<<"type:"<<animals[i]->getType()<<std::endl;
    }
    // Cat cat;
    // for (size_t i = 0; i < 100; i++)
    // {
    //     std::cout<<"ideas : "<<*cat.getBrain()<<std::endl;
    // }

    std::cout << "<<<<<<<<<< WHILE PLACE <<<<<<<<<<<<<<<" << std::endl;
    int count = 0;
    while (count < Acount)
    {
        delete animals[count];
        count++;
    }

    std::cout << "<<<<<<<<<< DELETE PLACE <<<<<<<<<<<<<<<" << std::endl;
    delete j;
    delete i;
    std::cout << "<<<<<<<<<< DELETE FINISH <<<<<<<<<<<<<<<" << std::endl;
    return 0;
}
