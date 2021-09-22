#ifndef SCAVTRAP
#define SCAVTRAP
#include "ClapTrap.hpp"


class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap const &);
		void		guardGate();
		void attack(std::string const & target);
};
void	setDefault(int	&hp, int &ad, int &ep);
#endif
