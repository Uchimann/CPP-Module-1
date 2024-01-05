#pragma once
#include <iostream>

class Fixed{
    private:
            int fixvalue;
            static const int bits = 8;
    public:
            Fixed();
            Fixed(const int);
            Fixed(const float);
            Fixed(const Fixed&);
            Fixed& operator=(const Fixed& obj);
            ~Fixed();
            int getRawBits()const;
            void setRawBits(int const raw);
            float toFloat()const;
            int toInt()const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &obj);
