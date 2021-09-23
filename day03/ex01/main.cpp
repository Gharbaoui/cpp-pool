#include "ScavTrap.hpp"

int main()
{
	//check default constructor
	ScavTrap a;
    a.print();
	/// check paramter con constructor
	ScavTrap b("Scave Trappppp");
	b.print();

	// check copy constructor
	ScavTrap c(b);
    c.print();

	/// check = operator 
	ScavTrap d;
	d = c;
    d.print();

	// check destructor 
	{
		ScavTrap a;
		std::cout << std::endl;
	}
	std::cout << std::endl;
    a.attack("new one ");
	// test guardGate
	a.guardGate();
}

