#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	ShrubberyCreationForm a;
	ShrubberyCreationForm b("new tree");

	Bureaucrat t(10);
	
	try{
		b.beSigned(t);
		b.execute(t);
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
