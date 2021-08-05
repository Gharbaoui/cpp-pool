#include "Zombie.hpp"

int main()
{
    int n;
    
    n = 10;
    Zombie *z = zombieHorde(n, "mohamed");
    
    for (int i = 0; i < n; i++)
        z[i].announce();
    delete[] z;
}
