#include <iostream>
#include "PhoneBook.hpp"
#include <string>

bool isEmpty(const std::string str)
{
    int i = 0;
    for (; str[i] != '\0'; i++);
    if (i == 0)
        return (1);
    return (0);
}

bool check_number(std::string str) {

   for (unsigned long i = 0; i < str.length(); i++)
   {
        if (isdigit(str[i]) == false)
            return false;

   }
      return true;
}

void PhoneBook::add(){
    static int i = 0;

    if(i == 8)
        i = 0;

    std::string str;
    std::string freestring = "";

    while(isEmpty(str))
    {
        std::cout << "Name : ";
        std::getline(std::cin,str);
        this->contacts[i].set_firstName(str);
    }
    
    str = freestring;

    while(isEmpty(str))
    {
        std::cout << "Lastname : ";
        std::getline(std::cin,str);
        this->contacts[i].set_lastName(str);
    }

    str = freestring;

    while(isEmpty(str))
    {
        std::cout << "Nickname : ";
        std::getline(std::cin,str);
        this->contacts[i].set_nickName(str);
    }

    str = freestring;

    while(isEmpty(str))
    {
        std::cout << "Phone Number : ";
        std::getline(std::cin,str);
        this->contacts[i].set_phoneNumber(str);
    }

    str = freestring;

    while(isEmpty(str))
    {
        std::cout << "Secret : ";
        std::getline(std::cin,str);
        this->contacts[i].set_secret(str);
    }
    this->index++;
    i++;
}

void PhoneBook::search(){
    
    int j = 0;
    int i = this->index;
    
    std::string tmp;
    
    if(i > 7){
        i = 8;
    }

    std::cout << formatter("INDEX") + "|" << formatter("NAME") + "|" << formatter("SURNAME") + "|" << formatter("NICKNAME") + "|" << std::endl;

    while(j < i){
        tmp = std::to_string(j + 1);
        std::cout << formatter(tmp) << "|";
        std::cout << formatter(this->contacts[j].get_firstName()) << "|";
        std::cout << formatter(this->contacts[j].get_lastName()) << "|";
        std::cout << formatter(this->contacts[j].get_nickName()) << "|";
        j++;

        std::cout << std::endl;
    }

    if(this->index > 0)
    {
        std::cout << "Enter index : ";
        std::getline(std::cin,tmp);

        if(check_number(tmp))
            i = std::stoi(tmp);
        else
            return ;
        i--;

        if(i < this->index && i >= 0 && i <= 7)
        {   
            std::cout << "thisin indexi = " << this->index << " i = " << i << std::endl;

            std::cout << "Name     : " << this->contacts[i].get_firstName() << std::endl;
            std::cout << "Surname  : " << this->contacts[i].get_lastName() << std::endl;
            std::cout << "Nickname : " << this->contacts[i].get_nickName() << std::endl;
            std::cout << "Phone    : " << this->contacts[i].get_phoneNumber() << std::endl;
            std::cout << "Secret   : " << this->contacts[i].get_secret() << std::endl;
        }
        else
            std::cout << "index not found.." << std::endl;
    }
}

/*int PhoneBook::get_index()const{
    return this->index;
}*/

PhoneBook::PhoneBook(){
    this->index = 0;
}