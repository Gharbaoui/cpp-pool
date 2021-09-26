#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat default")
{
	_grade = 10;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const	&cp) : _name (cp._name)
{
	*this = cp;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		_grade = rhs._grade;
	return *this;
}

Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(int const grade) : _name("Bureaucrat default")
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

std::string	const	Bureaucrat::getName() const
{
	return _name;
}

int					Bureaucrat::getGrade() const
{
	return _grade;
}

void				Bureaucrat::increment()
{
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void				Bureaucrat::decrement()
{
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

const	char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High ...";
}

const	char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low ...";
}

void	Bureaucrat::signForm(Form const &f) const
{
	if (f.getSigned())
	{
		std::cout << _name << " signs " << std::endl;
		std::cout << f << std::endl;	
	}else
	{
		std::cout << _name << " cannot sign " << std::endl;
		std::cout << f << std::endl;
		std::cout << "because grade of bureaucrat is low" << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &p)
{
	p.put(os);
	return os;
}

void			Bureaucrat::put(std::ostream &os) const
{
	os << _name << ", bureaucrat grade " << _grade;
}
