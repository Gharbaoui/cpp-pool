#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    integer = 0;
}

Fixed::Fixed(const Fixed &cp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed   &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    integer = rhs.integer;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return integer;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    integer = raw;
}

Fixed::Fixed(const int val)
{
    integer = val << fractionalBits;
}

Fixed::Fixed(const float value)
{
    
}
