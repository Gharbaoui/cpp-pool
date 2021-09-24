#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    type = "ANIMAL";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "WrongAnimal assigment" << std::endl;
        type = rhs.type;
    }
    return *this;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cp)
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = cp;
}

WrongAnimal::WrongAnimal(std::string const name)
{
    std::cout << "WrongAnimal Paramter constructor" << std::endl;
    type = name;
}


std::string WrongAnimal::getType() const
{
    return type;
}

void    WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal make sound ....." << std::endl;
}





