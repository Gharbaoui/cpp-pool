#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

class Base{
	public:
		virtual ~Base();
};

class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};

class Other : public Base{};

Base * generate(void);
void identify(Base* p);
#endif
