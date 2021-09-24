#ifndef DOG
#define DOG

#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        ~Dog();
        Dog(std::string const name);
        Dog(Dog const &cp);
        Dog &operator=(Dog const &rhs);
        void    makeSound() const;
};

#endif
