#include "main.hpp"

int  Box::counter = 10;

void    Box::get_info()
{
    std::cout << counter << std::endl;
}

int main()
{
    Box b;

    Box::get_info();
}
