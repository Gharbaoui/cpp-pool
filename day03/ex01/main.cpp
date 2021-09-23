#include "ScavTrap.hpp"

int main()
{
	//check default constructor
	ScavTrap a;
	std::cout << std::endl;
	/// check paramter con constructor
	ScavTrap b("Scave Trappppp");
	std::cout << b.getName() << std::endl << std::endl;
	
	// check copy constructor
	ScavTrap c(b);
	std::cout << c.getName() << std::endl << std::endl;
	std::cout << std::endl;

	/// check = operator 
	ScavTrap d;
	d = c;
	std::cout << d.getName() << std::endl << std::endl;
	std::cout << std::endl;

	// check destructor 
	{
		ScavTrap a;
		std::cout << std::endl;
	}
	std::cout << std::endl;

	// test guardGate
	a.guardGate();
}

