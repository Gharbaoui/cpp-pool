#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap ";
	std::cout << "constructor called"  << std::endl;
	
	_name = "DiamondTrap";
	ClapTrap::_name = "DiamondTrap_clap_name";
	default_info(_hitpoints, _attackdamage, _energypoints);
}

DiamondTrap::DiamondTrap(std::string const &name) : ScavTrap(name)
{
	std::cout << "DiamondTrap ";
	std::cout << "param constructor" << std::endl;
	_name = name;
	default_info(_hitpoints, _attackdamage, _energypoints);
}

DiamondTrap::DiamondTrap(DiamondTrap const &cp)
{
	std::cout << "DiamondTrap ";
	std::cout << "copy constructor" << std::endl;
	*this = cp;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap ";
	std::cout << "destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap ";
	std::cout << "assiognment operator" << std::endl;

	ScavTrap::_name = rhs.ScavTrap::_name;
	_name = rhs._name;
	_hitpoints = rhs._hitpoints;
	_energypoints = rhs._energypoints;
	_attackdamage = rhs._attackdamage;
	return *this;
}

void	DiamondTrap::print() const 
{
	std::cout << "clap trap name |" << ClapTrap::_name << "|" << std::endl;
	std::cout << "name |" << _name << "|" << std::endl;
	std::cout << "hit points |" << _hitpoints << "|" << std::endl;
	std::cout << "energy points |" << _energypoints << "|" << std::endl;
	std::cout << "attack damage |" << _attackdamage << "|" << std::endl << std::endl;;
}

void	default_info(int &hp, int &ad, int &ep)
{
	hp = 100;
	ad = 30;
	ep = 50; // later change
}
