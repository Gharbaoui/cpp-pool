#include "DiamondTrap.hpp"

int main()
{
    /// default constructor
    DiamondTrap a;
    a.print_diamond();

    /// param constructor
    DiamondTrap b("DDDDD");
    b.print_diamond();

    /// copy constructor
    DiamondTrap c(b);
    b.print_diamond();

    DiamondTrap d;
    std::cout << std::endl;
    //// assigmnet operator
    d = c;
    d.print_diamond();
    
    ///destuctor
    {
        DiamondTrap p;
        std::cout << std::endl;
    }

    /// functions
    std::cout << std::endl;
    d.attack("ATTACK");
    std::cout << std::endl;
    d.guardGate();
    std::cout << std::endl;
    d.highFivesGuys();
    std::cout << std::endl;
    std::cout << std::endl;
}
