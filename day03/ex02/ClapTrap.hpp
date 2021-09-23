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
		// get
		std::string	getName() const;
		int			getHitPoints() const;
		int			getAttackDamage() const;
		int			getEnergyPoints() const;

		void		setName(std::string name);
		void		setHitPoints(int hp);
		void		setAttackDamage(int d);
		void		setEnergyPoints(int ep);	
	protected:
		std::string _name;
		int			_hitpoints;
		int			_energypoints;
		int			_attackdamage;
};
#endif
