#include "Karen.hpp"

Karen::Karen(){
	mfsp[0] = &Karen::debug;
	mfsp[1] = &Karen::info;
	mfsp[2] = &Karen::warning;
	mfsp[3] = &Karen::error;

	mfsn[0] = "DEBUG";
	mfsn[1] = "INFO";
	mfsn[2] = "WARNING";
	mfsn[3] = "ERROR";
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
	for (int i = 0; i < num_mem; i++) {
		if (level == mfsn[i]) {
			void (Karen::*a)() = mfsp[i];
			(this->*a)();
		}
	}
}
