#ifndef CLAP_TRAP
#define CLAP_TRAP
#include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(ClapTrap const &cp);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap	&operator=(ClapTrap const &rhs);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        void    print() const;
	private:
		std::string _name;
		int			_hitpoints;
		int			_energypoints;
		int			_attackdamage;
};

#endif
