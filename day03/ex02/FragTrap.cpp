#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap ";
	std::cout << "default constructor" << std::endl;
	_name = "FragTrap default name";
	setDefaultFrag(_hitpoints, _attackdamage, _energypoints);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap ";
	std::cout << "destructor" << std::endl;
	
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "FragTrap ";
	std::cout << "param constructor" << std::endl;
	setDefaultFrag(_hitpoints, _attackdamage, _energypoints);
}

FragTrap::FragTrap(FragTrap const &cp) : ClapTrap(cp)
{
	std::cout << "FragTrap ";
	std::cout << "copy constructor" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap ";
	std::cout << "assiognment operator" << std::endl;
	
	_name = rhs._name;
	_hitpoints = rhs._hitpoints;
	_energypoints = rhs._energypoints;
	_attackdamage = rhs._attackdamage;
	return *this;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives request on the standard output" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap ";
	std::cout << _name << " attacks " << target << std::endl;
}

void	setDefaultFrag(int	&hp, int &ad, int &ep)
{
	hp = 100;
	ad = 30;
	ep = 100;
}
