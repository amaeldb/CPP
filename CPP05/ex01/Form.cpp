#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string &n, const unsigned int s, const unsigned int x) : name(n), s(false), gts(s), gtx(x)
{
	std::cout << "Form Default constructor called" << std::endl;
	try
	{
		if (s < 1)
			throw Form::GradeTooHighException();
		else if (s > 150)
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cerr << "Grade to sign: " << e.what() << std::endl;
		*(int *)&gts = 1;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << "Grade to sign: " << e.what() << std::endl;
		*(int *)&gts = 150;
	}
	try
	{
		if (x < 1)
			throw Form::GradeTooHighException();
		else if (x > 150)
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cerr << "Grade to execute: " << e.what() << std::endl;
		*(int *)&gtx = 1;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << "Grade to execute: " << e.what() << std::endl;
		*(int *)&gtx = 150;
	}
}

Form::Form(const Form &a) : name(a.name), s(a.s), gts(a.gts), gtx(a.gtx)
{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(const Form &a)
{
	std::cout << "Form Copy assignment constructor called" << std::endl;
	if (this == &a)
		return *this;
	s = a.s;
	return *this;
}

std::string Form::getName() const
{
	return name;
}

bool Form::getS() const
{
	return s;
}

unsigned int Form::getGts() const
{
	return gts;
}

unsigned int Form::getGtx() const
{
	return gtx;
}

void Form::beSigned(const Bureaucrat &b) const
{
	if (b.getGrade() > getGts())
		throw Form::GradeTooLowException();
	*(bool *)&s = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Invalid Grade: Grade too high.";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Invalid Grade: Grade too low.";
}

std::ostream &operator<<(std::ostream &o, const Form &f)
{

	o << "Form: " << f.getName() << std::endl;
	o << "Signed: " << (f.getS() ? "Yes" : "No") << std::endl;
	o << "Grade to sign: " << f.getGts() << std::endl;
	o << "Grade to execute: " << f.getGtx() << std::endl;
	return o;
}