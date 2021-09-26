#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
:Form("Shrubbery_Creation_Form", 145, 137), _target("Shrubbery_Creation_Form")
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target)
:Form("Shrubbery_Creation_Form", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cp)
:Form("Shrubbery_Creation_Form", 145, 137), _target(cp._target)
{
	
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		this->Form::operator=(rhs);
	}
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream file(_target + "_shrubbery");

	file <<	"				&&& &&  & &&"  << std::endl;
	file << "			&& &\\/&\\|& ()|/ @, &&" << std::endl;
	file << "			&/(/&/&||/& /_/)_&/_&" << std::endl;
	file << "		&() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
	file << "		&_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
	file << "		&&   && & &| &| /& & % ()& /&&" << std::endl;
	file << "		()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
	file << "			&&     \\|||" << std::endl;
	file << "					|||" << std::endl;
	file << "					|||" << std::endl;
	file << "					|||" << std::endl;
	file << "			, -=-~  .-^- _" << std::endl;

	file.close();
}
