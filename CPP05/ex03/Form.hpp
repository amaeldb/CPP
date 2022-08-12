#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	public:
		Form(const std::string &n, const unsigned int s, const unsigned int x);
		Form(const Form &a);
		virtual ~Form();

		Form &operator=(const Form &a);

		std::string getName() const;
		bool getS() const;
		unsigned int getGts() const;
		unsigned int getGtx() const;

		void setS(bool b) const;

		void beSigned(const Bureaucrat &b) const;
		virtual void execute(const Bureaucrat &executor) const = 0;

	private:
		const std::string name;
		bool s;
		const unsigned int gts;
		const unsigned int gtx;

	public:
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

		class isNotSigned : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, const Form &f);

#endif
