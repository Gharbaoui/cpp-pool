#ifndef ANIMAL
#define ANIMAL

#include <iostream>

class Animal{
    public:
        Animal();
        virtual ~Animal();
        Animal(Animal const &cp);
        Animal(std::string  const name);
        Animal  &operator=(Animal const &rhs);
        virtual void    makeSound() const = 0;
        std::string getType() const;
        void        setType(std::string type);
    protected:
        std::string type;
};

#endif
