#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
class Form;
class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int const grade);
		Bureaucrat(int const grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const	&);
		Bureaucrat	&operator=(Bureaucrat const &);
		std::string	const		getName() const;
		int						getGrade() const;

		void					increment();
		void					decrement();
		void					signForm(Form const &) const;
		void					put(std::ostream &os) const;
	private:
		class	GradeTooHighException;
		class	GradeTooLowException;
		std::string const	_name;
		int					_grade;

};

class	Bureaucrat::GradeTooLowException : public std::exception{
	public:
		const	char	*what() const throw();

};

class	Bureaucrat::GradeTooHighException : public std::exception{
	public:
		const	char	*what() const throw();

};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &p);
#endif
