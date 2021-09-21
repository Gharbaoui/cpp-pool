#include "Fixed.hpp"

int main()
{
	Fixed a;
	// test get set 
	a.setRawBits(12);
	std::cout << a.getRawBits() << std::endl;

	// test copy constructr = operator
	Fixed b(a);
	Fixed c;

	c = b;
}
