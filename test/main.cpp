#include "main.hpp"

int main()
{
	Box b(1, 2, 33);
	int (Box::*a)() = &Box::area;

	std::cout << (b.*a)() << std::endl;

}
