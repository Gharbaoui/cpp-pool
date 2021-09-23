#include "DiamondTrap.hpp"

int main()
{
	//// test default constructor
	DiamondTrap a;
	std::cout << std::endl;
	a.print();
	// test paramter
	DiamondTrap b("DiaTrap name");
	std::cout << std::endl;
	b.print();
}

