#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    /// default constructor
    FragTrap a;
    a.print();

    // param constructor
    FragTrap b("Frag TRAPPP");
    b.print();

    // copy constructor
    FragTrap c(b);
    c.print();
    
    // ASSIGNMENT operator
    FragTrap d;
    std::cout << "=====" << std::endl;
    d = c;
    d.print();

    /// destructor
    {
        FragTrap *a = new FragTrap();
        delete a;
        std::cout << std::endl;
    }
    
    /// functions test
    a.highFivesGuys();
    b.attack("new string");
    std::cout << std::endl;
}

