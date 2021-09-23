#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
    a.print();

	ClapTrap m("A");
    m.print();

	ClapTrap b(m);
    b.print();

	ClapTrap g;
	g = m;
    g.print();

	g.attack("R");
	m.attack("B");

	m.takeDamage(45);
	b.beRepaired(10);
}
