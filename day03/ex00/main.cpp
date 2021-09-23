#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap m("A");
	ClapTrap b(m);
	ClapTrap g;

	g = m;
	g.attack("R");
	m.attack("B");

	m.takeDamage(45);
	a.beRepaired(10);
}
