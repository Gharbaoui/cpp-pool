#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap ";
	std::cout << "constructor called"  << std::endl;
	_name = "ScavTrap default name";
	setDefault(_hitpoints, _attackdamage, _energypoints);
}

ScavTrap::ScavTrap(ScavTrap const &cp) : ClapTrap(cp)
{
	std::cout << "ScavTrap ";
	std::cout << "copy constructor called"  << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap ";
	std::cout << "destructor called"  << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "ScavTrap ";
	std::cout << "name constructor called"  << std::endl;

	setDefault(_hitpoints, _attackdamage, _energypoints);
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap ";
	std::cout << "assignment operator called"  << std::endl;
	
	_name = rhs._name;
	_hitpoints = rhs._hitpoints;
	_energypoints = rhs._energypoints;
	_attackdamage = rhs._attackdamage;
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << _name << " have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "|ScavTrap |";
	std::cout << _name << " attacks " << target << std::endl;
}


void	setDefault(int	&hp, int &ad, int &ep)
{
	hp = 100;
	ad = 20;
	ep = 50;
}
