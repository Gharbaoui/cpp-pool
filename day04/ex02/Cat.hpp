#ifndef CAT
#define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    public:
        Cat();
        ~Cat();
        Cat (Cat const &cp);
        Cat(std::string const name);
        Cat &operator=(Cat const &rhs);
        void    makeSound() const;
        Brain   *getBrain() const;
    private:
        Brain *brain;
};

#endif
