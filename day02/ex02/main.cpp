#include "Fixed.hpp"

int main()
{
	Fixed a(11);
	
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << (a / b) << std::endl;
}
