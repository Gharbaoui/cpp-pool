#include "DiamondTrap.hpp"

int main()
{
	/*
	//check default constructor
	ScavTrap a;
	std::cout << std::endl;
	/// check paramter con constructor
	ScavTrap b("Scave Trappppp");
	std::cout << b.getHitPoints() << std::endl << std::endl;
	
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
	a.guardGate();*/


	///default constructor
	FragTrap a;
	std::cout << std::endl;

	/// param constructor
	FragTrap c("Tr1");
	std::cout << std::endl;
	// copy constructor
	FragTrap b (c);
	std::cout << std::endl;
	// assignment operator
	a = b;
	std::cout << std::endl;
	//destructor 
	{
		FragTrap g;
		std::cout << std::endl;
	}
/*	std::cout << a.getName() << " " << a.getAttackDamage()
		<< " " << a.getHitPoints() << " " << a.getEnergyPoints() << std::endl;

	/// high five
	a.highFivesGuys();
	std::cout << std::endl;
	a.attack("tr2");
	std::cout << std::endl;*/
	DiamondTrap ad;
	ad.attack("name");
}

