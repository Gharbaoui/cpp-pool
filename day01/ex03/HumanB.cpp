#include "HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name)
{
    _name = name;
}

void    HumanB::attack()
{
    std::cout << _name << " attcks with his " <<
    _weapon->getType() << std::endl;
}


void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}
