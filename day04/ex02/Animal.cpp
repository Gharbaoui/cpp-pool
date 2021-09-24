#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    type = "ANIMAL";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal  &Animal::operator=(Animal const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Animal assigment" << std::endl;
        type = rhs.type;
    }
    return *this;
}

Animal::Animal(Animal const &cp)
{
    std::cout << "Animal copy constructor" << std::endl;
    *this = cp;
}

Animal::Animal(std::string const name)
{
    std::cout << "Animal Paramter constructor" << std::endl;
    type = name;
}


std::string Animal::getType() const
{
    return type;
}

void    Animal::setType(std::string type)
{
    this->type = type;
}

void    Animal::makeSound() const
{
    std::cout << "Animal make sound ....." << std::endl;
}





