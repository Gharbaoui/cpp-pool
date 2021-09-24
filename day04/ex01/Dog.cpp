#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    brain = new Brain();
    type = "DOG";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog::Dog(std::string const name) : Animal(name)
{
    std::cout << "Dog paramter constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(Dog const &cp) : Animal(cp)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain();
}

Dog &Dog::operator=(Dog const &rhs)
{
    if (this != &rhs) {
        std::cout << "DOG assigment operator" << std::endl;
        this->Animal::operator=(rhs);
        brain = new Brain();
    }
    return *this;
}

Brain   *Dog::getBrain() const
{
    return brain;
}

void    Dog::makeSound() const
{
    std::cout << "Dog making sound ....." << std::endl;
}
