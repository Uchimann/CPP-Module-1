#include "Fixed.hpp"

Fixed::Fixed(){
        fixvalue = 0;
        std::cout << "default const called" << std::endl;
}

Fixed::Fixed(const Fixed& obj){
        
        std::cout << "copy const called" << std::endl;
        *this = obj;
}

Fixed::~Fixed(){
        std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits()const{
    std::cout << "get rawbits member function called" << std::endl;
    return fixvalue;
}
Fixed &Fixed::operator=(const Fixed& obj)
{
    std::cout << "operator assigment called" << std::endl;
    if(this != &obj)
    {
        this->fixvalue = obj.getRawBits();
    }
    return *this;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "set rawbits member function called" << std::endl;
    this->fixvalue = raw;
}

Fixed::Fixed(const int i)
{
    this->fixvalue = (i * (1 << this->bits));
}

Fixed::Fixed(const float i)
{
    this->fixvalue = roundf((i * (1 << this->bits)));
}

float Fixed::toFloat()const
{
        return ((float)this->fixvalue / (float)(1 << this->bits));
}

int Fixed::toInt()const
{
        return(this->fixvalue / (1 << this->bits));
}

std::ostream &operator<<(std::ostream &output, const Fixed &obj)
{
        output << obj.toFloat();
        return (output);
}