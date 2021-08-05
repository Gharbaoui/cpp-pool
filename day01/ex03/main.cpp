#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon w("BLACKBIRD");
        HumanA bob("Bob", w);
        bob.attack();
        w.setType("SR-71");
        bob.attack();
    }
    {
        Weapon w("f-22");
        HumanB jim("jim");
        jim.setWeapon(w);
        jim.attack();
        w.setType("f-22 raptor");
        jim.attack();
    }
}
