#include "PhoneBook.hpp"
#include <string>
#include <iostream>


int main(){

    PhoneBook a;
    while (1)
    {
        std::string str;
        std::cout << "Enter command -> ";
        std::getline(std::cin,str);

        if(str == "ADD")
            a.add();
        else if(str == "SEARCH")
            a.search();
        else if(str == "EXIT")
            return 1;
        else
            continue;
    }
}