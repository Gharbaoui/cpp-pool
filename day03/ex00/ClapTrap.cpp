#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap ";
	std::cout << "constructor called"  << std::endl;
	_name = "defualt name";
	_hitpoints = 10;
	_energypoints = 10;
	_attackdamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap ";
	std::cout << "string constructor called"  << std::endl;
	_name = name;
	_hitpoints = 10;
	_energypoints = 10;
	_attackdamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap ";
	std::cout << "destructor called"  << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cp)
{
	std::cout << "ClapTrap ";
	std::cout << "copy constructor called"  << std::endl;
	*this = cp;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap ";
	std::cout << "assignment operator called"  << std::endl;
	_name = rhs._name;
	_hitpoints = rhs._hitpoints;
	_energypoints = rhs._energypoints;
	_attackdamage = rhs._attackdamage;
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "|ClapTrap |";
	std::cout << _name << " attacks " << target << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap ";
	std::cout << _name << " got damage and " << amount << " points lost " << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap ";
	std::cout << _name << " got " << amount << " points " << std::endl; 
}



void    ClapTrap::print() const 
{
        std::cout << "name |" << _name << "|" << std::endl;
        std::cout << "hit points |" << _hitpoints << "|" << std::endl;
        std::cout << "energy points |" << _energypoints << "|" << std::endl;
        std::cout << "attack damage |" << _attackdamage << "|" << std::endl << std::endl;
}



