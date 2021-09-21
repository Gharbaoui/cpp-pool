#include "Fixed.hpp"

int main()
{
	// float constructor
	Fixed a(12.4f);
	// int constructor
	Fixed c(19);
	// << operator 
	//
	std::cout << a << std::endl;
	// to int function
	std::cout << a.toInt() << std::endl;
	// to float function
	std::cout << a.toFloat() << std::endl;
}
