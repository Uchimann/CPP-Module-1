#pragma once
#include "Contacts.hpp"

class PhoneBook{
    private:
            int index;
    public:
            Contacts contacts[8];
            PhoneBook();
            void add();
            void search();
};
std::string formatter(std::string);
bool isEmpty(const std::string str);
bool check_number(std::string str);
unsigned long lencheck(std::string str);