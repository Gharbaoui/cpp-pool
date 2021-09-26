#ifndef	SHRUBBERY
#define SHRUBBERY

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &cp);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);
		virtual	void			execute(Bureaucrat const & executor) const;
	private:
		std::string const _target;
};

#endif
