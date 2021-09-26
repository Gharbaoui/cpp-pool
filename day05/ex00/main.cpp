#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a;

	std::cout << a<< std::endl;
	Bureaucrat b("GRADE" , 12);
	std::cout <<  "name: " << b.getName()
	<< " grade: " << b.getGrade() << std::endl;

	try{
		Bureaucrat a(1784);
	}catch (std::exception &e)
	{
		std::cout << e.what () << std::endl;
	}

	try{
		Bureaucrat g(0);
	}catch(std::exception &e)
	{
		std::cout << e.what () << std::endl;
	}
	try{
		Bureaucrat g(8);
	}catch(std::exception &e)
	{
		std::cout << e.what () << std::endl;
	}

	std::cout << std::endl;
	Bureaucrat r(1);

	try{
		r.increment();
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Bureaucrat h(150);

	try{
		h.decrement();
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
