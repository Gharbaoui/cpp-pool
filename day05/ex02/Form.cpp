#include "Form.hpp"

Form::Form() : grs(1), gre(12), _name ("default form")
{
	_signed = false;
}

Form::~Form()
{

}

Form::Form(int const grs, int const gre) : grs(grs), gre(gre), _name ("default form")
{
	if (grs < 1 || gre < 1)
		throw GradeTooHighException();
	if (grs > 150 || gre > 150)
		throw GradeTooLowException();
	_signed = false;
}

Form::Form(std::string const name, int const _grs, int const _gre): grs(_grs), gre(_gre), _name(name)
{
	if (grs < 1 || gre < 1)
		throw GradeTooHighException();
	if (grs > 150 || gre > 150)
		throw GradeTooLowException();
	_signed = false;
}

Form::Form(Form const &cp) : grs(cp.grs), gre(cp.gre), _name(cp._name)
{
	if (grs < 1 || gre < 1)
		throw GradeTooHighException();
	if (grs > 150 || gre > 150)
		throw GradeTooLowException();
	*this = cp;
}

Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		_signed = rhs._signed;
	}
	return *this;
}

std::string		Form::getName() const
{
	return _name;
}

bool			Form::getSigned() const
{
	return _signed;
}

int		Form::getGrs() const
{
	return grs;
}

int		Form::getGre() const
{
	return gre;
}

std::ostream	&operator<<(std::ostream &os, Form const &p)
{
	p.put(os);
	return os;
}

void		Form::put(std::ostream &os) const
{
	os << "name: " << _name << std::endl
	<< "a grade required to sign it: " << grs << std::endl
	<< "a grade required to execute it: " << gre << std::endl
	<< "is signed: " << _signed;
}

const	char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High ...";
}

const	char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low ...";
}

void			Form::beSigned(Bureaucrat const b)
{
	if (b.getGrade() < grs)
		_signed = true;
	else
		throw GradeTooLowException();
}

const	char	*Form::SIGNEEXCEPTION::what() const throw()
{
	return "not signed";
}

const	char	*Form::GRADEEXCEPTION::what() const throw()
{
	return "executor has low grade";
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw SIGNEEXCEPTION();
	if (executor.getGrade() > gre)
		throw GRADEEXCEPTION();
}
