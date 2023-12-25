#include "PhoneBook.hpp"
#include <string>

unsigned long lencheck(std::string str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}


std::string formatter(std::string str){

    unsigned long len = lencheck(str);
    unsigned long i = 0;

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
    else if (len >= 10)
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