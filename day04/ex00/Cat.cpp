#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "CAT constructor called" << std::endl;
    type = "CAT";
}

Cat::~Cat()
{
    std::cout << "CAT destructor called" << std::endl;
}


Cat::Cat(std::string const name) : Animal(name)
{
    std::cout << "CAT paramter constructor called" << std::endl;
}

Cat::Cat(Cat const &cp) : Animal(cp)
{
    std::cout << "CAT copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "CAT assigment operator" << std::endl;
        this->Animal::operator=(rhs);
    }
    return *this; 
}

void    Cat::makeSound() const
{
    std::cout << "CAT making sound ...mmmmmmmmm.." << std::endl;
}
