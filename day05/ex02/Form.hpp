#ifndef	FORM
#define FORM

#include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		~Form();
		Form(std::string const , int const grs = 1, int const gre = 12);
		Form(Form const &);
		Form(int const grs, int const gre = 12);
		Form	&operator=(Form const &);

		std::string		getName() const;
		bool			getSigned() const;
		int			getGrs() const;
		int			getGre() const;
		void		beSigned(Bureaucrat const );
		void			put(std::ostream &os) const;
		virtual	void			execute(Bureaucrat const & executor) const;

	private:
		int	const			grs; // grade required to sign it
		int	const			gre; // grade re..     to excute
		std::string	const	_name;
		bool		_signed;
		class		GradeTooHighException;
		class		GradeTooLowException;
		class		SIGNEEXCEPTION;
		class		GRADEEXCEPTION;

};

class	Form::GradeTooLowException : public std::exception{
	public:
		const	char	*what() const throw();

};

class	Form::GradeTooHighException : public std::exception{
	public:
		const	char	*what() const throw();

};

class	Form::SIGNEEXCEPTION : public std::exception{
	public:
		const	char	*what() const throw();

};

class	Form::GRADEEXCEPTION : public std::exception{
	public:
		const	char	*what() const throw();

};

std::ostream	&operator<<(std::ostream &os, Form const &p);

#endif
