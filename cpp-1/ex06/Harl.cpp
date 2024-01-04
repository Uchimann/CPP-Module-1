#include "Harl.hpp"

void Harl:: debug(){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
    std::cout << "WARNING" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

bool isEmpty(const std::string str)
{
    int i = 0;
    for (; str[i] != '\0'; i++);
    if (i == 0)
        return (1);
    return (0);
}

void Harl::complain(std::string level){

    std::string array[4] = {"DEBUG","INFO","WARNING","ERROR"};

    int i = 0;

    if(isEmpty(level))
        return ;

    while(i < 4 && (!isEmpty(array[i]) && array[i] != level))
        i++;

    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    switch(i){
        case 0:
                (this->*(ptr[i++]))();
        case 1:
                (this->*(ptr[i++]))();
        case 2:
                (this->*(ptr[i++]))();
        case 3:
                (this->*(ptr[i++]))();
                break ;
        default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                break;    
    }                                          
}
