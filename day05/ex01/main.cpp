#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form a("FORM", 25, 8);
	// test getters
	std::cout << a.getName() << std::endl;
	std::cout << a.getGrs()<< std::endl;
	std::cout << a.getGre()<< std::endl;

	// test << overloading
	std::cout << a << std::endl;

	std::cout << std::endl;

	/// test beSigned function
	Bureaucrat b("Mohamed", 26);
	try
	{
		a.beSigned(b);
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//// test signForm
	b.signForm(a);
}
