#ifndef DIAMONDTRAP
#define  DIAMONDTRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		using ScavTrap::attack;
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(DiamondTrap const &cp);
		DiamondTrap(std::string const &name);
		DiamondTrap	&operator=(DiamondTrap const &rhs);

		/// print
        void	print_diamond() const;
	private:
		std::string _name;
};

void	default_info(int &hp, int &ad, int &ep);
#endif
