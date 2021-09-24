#ifndef WRONGCAT
#define WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat (WrongCat const &cp);
        WrongCat(std::string const name);
        WrongCat &operator=(WrongCat const &rhs);
        void    makeSound() const;
};

#endif
