#include "Karen.hpp"

Karen::Karen(){
  /*  fptr.insert(std::pair<std::string, void	(Karen::*)()>("debug", &Karen::debug));
    fptr.insert(std::pair<std::string, void (Karen::*)()>("info", &Karen::info));
    fptr.insert(std::pair<std::string, void (Karen::*)()>("warning", &Karen::warning));
    fptr.insert(std::pair<std::string, void (Karen::*)()>("error", &Karen::error));*/
}

void    Karen::debug()
{
    std::cout <<
    "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
    << std::endl;
}

void    Karen::info()
{
    std::cout <<
    "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!"
    << std::endl;
}

void    Karen::warning()
{    
    std::cout <<
    "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month."
    << std::endl;
}

void    Karen::error(){
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
	int	arr[] = {std::stoi("debug"), std::stoi("info"), std::stoi("warning"), std::stoi("error")};
  /*  void    (Karen::*a)() = fptr[level];
    if (a != NULL)
        (this->*a)();
    else
        std::cout << "not valid" << std::endl;*/

	switch (std::stoi(level)){
		case std::stoi("deb:
			this->debug();
			break ;
		case std::stoi("info"):
			this->info();
			break;
		default:
			std::cout << "not valid!" << std::endl;
	}
}

int main()
{
    Karen k;
    
    k.complain("debug");
}
