#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"

class HumanB{
    
    public:
        HumanB();
        HumanB(std::string name);
        void    attack();
        void    setWeapon(Weapon &weapon);
    private:
        std::string _name;
        Weapon *_weapon;
};
#endif
