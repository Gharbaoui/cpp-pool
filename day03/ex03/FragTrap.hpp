#ifndef FRAGTRAP
#define FRAGTRAP
#include  "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap{
	public:
		FragTrap();
		FragTrap(FragTrap const &cp);
		FragTrap(std::string const &name);
		~FragTrap();
		FragTrap	&operator=(FragTrap const &rhs);
		void		highFivesGuys(void);
		void		attack(std::string const & target);
};

void	setDefaultFrag(int	&hp, int &ad, int &ep);

#endif
