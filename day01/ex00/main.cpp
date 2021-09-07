#include "Zombie.hpp"

int main ()
{
   Zombie *z;

    randomChump("ZOMBIE");
    z = newZombie("Zombie");
    delete z;
}
