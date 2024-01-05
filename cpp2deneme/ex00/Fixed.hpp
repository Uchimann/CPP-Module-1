#pragma once
#include <iostream>

class Fixed{
    private:
            int fixvalue;
            static const int bits;
    public:
            Fixed();
            Fixed(const Fixed&);
            Fixed& operator=(const Fixed& obj);
            ~Fixed();
            int getRawBits()const;
            void setRawBits(int const raw);
};