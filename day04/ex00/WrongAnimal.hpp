#ifndef WRONGANIMAL
#define WRONGANIMAL

#include <iostream>

class WrongAnimal{
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(WrongAnimal const &cp);
        WrongAnimal(std::string  const name);
        WrongAnimal  &operator=(WrongAnimal const &rhs);
        void    makeSound() const;
        std::string getType() const;
        void        setType(std::string type);
    protected:
        std::string type;
};

#endif
