#include "main.hpp"

Base::~Base()
{

}

Base * generate(void)
{
	int r;

	srand(time(NULL));
	r = rand();
	if (r % 3 == 2)
		return new A();
	if (r % 3 == 1)
		return new B();
	return new C();
}

void identify(Base* p)
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *>(p);
	if (a) {
		std::cout << "A" << std::endl;
		return ;
	}
	b = dynamic_cast<B *>(p);
	if (b) {
		std::cout << "B" << std::endl;
		return ;
	}
	c = dynamic_cast<C *>(p);
	if (c) {
		std::cout << "C" << std::endl;
		return ;
	}
	std::cout << "unknown" << std::endl;
}

void identify(Base &p)
{
	try{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	}catch(...){}
	try{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
	}catch(...){}
	try{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	}catch(...){}
	std::cout << "unknown" << std::endl;
}

int main()
{
	identify(generate());
	Base *b = new Other();
	identify(b);

	A a;

	Base &rb = a;
	identify(rb);
}
