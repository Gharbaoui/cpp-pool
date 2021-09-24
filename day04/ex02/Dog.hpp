#ifndef DOG
#define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    public:
        Dog();
        ~Dog();
        Dog(std::string const name);
        Dog(Dog const &cp);
        Dog &operator=(Dog const &rhs);
        Brain   *getBrain() const;
        void    makeSound() const;
    private:
        Brain   *brain;
};

#endif
