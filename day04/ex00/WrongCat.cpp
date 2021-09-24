#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongWrongCat constructor called" << std::endl;
    type = "WrongWrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongWrongCat destructor called" << std::endl;
}


WrongCat::WrongCat(std::string const name) : WrongAnimal(name)
{
    std::cout << "WrongWrongCat paramter constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &cp) : WrongAnimal(cp)
{
    std::cout << "WrongWrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "WrongWrongCat assigment operator" << std::endl;
        this->WrongAnimal::operator=(rhs);
    }
    return *this; 
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongWrongCat sound" << std::endl;
}
