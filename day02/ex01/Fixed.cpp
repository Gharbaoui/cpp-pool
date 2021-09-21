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

std::ostream	&operator<< (std::ostream &ost, const Fixed &obj)
{
	ost << obj.toFloat();
	return ost;
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
	std::cout << "Int constructor called" << std::endl;
    integer = val << fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	integer = roundf(value * (1 << fractionalBits));
}

float	Fixed::toFloat() const
{
	float val;

	val = float(integer) / (1 << fractionalBits);
	return val;
}

int		Fixed::toInt() const
{
	int val;

	val = integer / (1 << fractionalBits);
	return val;
}
