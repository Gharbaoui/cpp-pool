#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "CAT constructor called" << std::endl;
    brain = new Brain();
    type = "CAT";
}

Cat::~Cat()
{
    std::cout << "CAT destructor called" << std::endl;
    delete brain;
}


Cat::Cat(std::string const name) : Animal(name)
{
    std::cout << "CAT paramter constructor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(Cat const &cp) : Animal(cp)
{
    std::cout << "CAT copy constructor called" << std::endl;
    brain = new Brain();
}

Cat &Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "CAT assigment operator" << std::endl;
        this->Animal::operator=(rhs);
        brain = new Brain();
    }
    return *this; 
}

Brain   *Cat::getBrain() const
{
    return brain;
}

void    Cat::makeSound() const
{
    std::cout << "CAT making sound ...mmmmmmmmm.." << std::endl;
}
