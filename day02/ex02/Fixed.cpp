#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    integer = 0;
}

Fixed::Fixed(Fixed const &cp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
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
    integer = raw ;
}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called" << std::endl;
    integer = val << fractionalBits;
}

Fixed::Fixed(float const value)
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


/// operators

Fixed   &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    integer = rhs.integer;
    return *this;
}

std::ostream	&operator<< (std::ostream &ost, Fixed const &obj)
{
	ost << obj.toFloat();
	return ost;
}


///// comparison operators

bool	Fixed::operator<(Fixed const &rhs)
{
	return integer < rhs.integer;
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	return integer <= rhs.integer;
}

bool	Fixed::operator>(Fixed const &rhs)
{
	return integer > rhs.integer;
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	return integer >= rhs.integer;
}

bool	Fixed::operator==(Fixed  const	&rhs)
{
	return integer == rhs.integer;
}

bool	Fixed::operator!=(Fixed  const	&rhs)
{
	return integer != rhs.integer;
}

//// arithmetic operators


Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed obj;
	
	obj.setRawBits(integer + rhs.integer);
	return obj;
}

Fixed	Fixed::operator-(Fixed  const	&rhs)
{
	Fixed obj;

	obj.setRawBits(integer - rhs.integer);
	return obj;
}

Fixed	Fixed::operator*(Fixed  const	&rhs)
{
	Fixed obj;
	int valid;

	valid = (this->toFloat() * rhs.toFloat()) * (1 << fractionalBits);
	obj.setRawBits(valid);
	return obj;
}

Fixed	Fixed::operator/(Fixed const  &rhs)
{
	Fixed obj;
	int valid;

	valid = (this->toFloat() / rhs.toFloat()) * (1 << fractionalBits);
	obj.setRawBits(valid);
	return obj;
}

/// increment


Fixed	Fixed::operator++() // pre increment ++a
{
	int valid_new;

	valid_new = (this->toFloat() + 1) * (1 << fractionalBits);
	this->setRawBits(valid_new);
	return *this;
}

Fixed	Fixed::operator++(int n) // post increment a++
{
	Fixed backup;
	int valid_new;

	backup = *this;
	valid_new = (this->toFloat() + 1) * (1 << fractionalBits);
	this->setRawBits(valid_new);
	return backup;
}

// decrement


Fixed	Fixed::operator--() // pre decrement --a
{
	int valid_new;

	valid_new = (this->toFloat() - 1) * (1 << fractionalBits);
	this->setRawBits(valid_new);
	return *this;
}

Fixed	Fixed::operator--(int n) // post increment a--
{
	Fixed backup;
	int valid_new;

	backup = *this;
	valid_new = (this->toFloat() - 1) * (1 << fractionalBits);
	this->setRawBits(valid_new);
	return backup;
}

// other functions
Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f2;
	return f1;
}


Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f2;
	return f1;
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return f2;
	return f1;
}


Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return f2;
	return f1;
}
