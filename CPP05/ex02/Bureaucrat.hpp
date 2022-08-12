#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(const std::string n, unsigned int i);
		Bureaucrat(const Bureaucrat &a);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &a);

		std::string getName() const;
		unsigned int getGrade() const;

		void incGrade();
		void decGrade();

		void signForm(Form &f) const;
		void executeForm(Form &f) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		const std::string name;
		unsigned int grade;
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b);

#endif
