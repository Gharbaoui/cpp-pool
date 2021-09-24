#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain  destructor" << std::endl;
}

Brain::Brain(Brain const &cp)
{
    std::cout << "Brain copy constructor" << std::endl;
    *this = cp;
}

Brain   &Brain::operator=(Brain const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Brain assignment operator" << std::endl;
        for (int i = 0; i < size; i++)
            ideas[i] = rhs.ideas[i];
    }
    return *this;
}

void    Brain::announce()   const
{
    std::cout << "Brain announce called " << std::endl;
}
