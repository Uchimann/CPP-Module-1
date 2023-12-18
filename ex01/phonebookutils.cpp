#include "phonebook.hpp"
#include <string>

std::string formatter(std::string str){

    int len = str.length();
    int i = 0;

    std::string ret;

    if(len < 10)
    {
        while(i < 10 - len)
        {
            ret += " ";
            i++;
        }

        ret += str;
    }
    else if (len > 10)
    {
        while(i < 9)
        {
            ret += str[i];
            i++;
        }
        ret += ".";
    }
    return ret;
}