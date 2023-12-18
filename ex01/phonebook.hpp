#pragma once
#include "contacts.hpp"

class Phonebook{
    private:
            int index;
    public:
            Contacts contacts[8];
            Phonebook();
            void add();
            void search();
            int get_index()const;
};

std::string formatter(std::string);