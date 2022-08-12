#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string n, unsigned int i) : name(n)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	try
	{
		if (i < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (i > 150)
			throw Bureaucrat::GradeTooLowException();
		this->grade = i;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
		grade = 1;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
		grade = 150;
	}
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &a) : name(a.name), grade(a.grade)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a)
{
	std::cout << "Bureaucrat Copy assignment constructor called" << std::endl;
	if (this == &a)
		return *this;
	grade = a.grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return name;
}

unsigned int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incGrade()
{
	try
	{
		if (grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		grade--;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::decGrade()
{
	try
	{
		if (grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		grade++;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << getName() << " signed " << f.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form &f) const
{
	try
	{
		f.execute(*this);
		std::cout << getName() << " executed " << f.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << getName() << " couldn't execute " << f.getName() << " because " << e.what() << std::endl;
	}
	catch (Form::isNotSigned &e)
	{
		std::cerr << getName() << " couldn't execute " << f.getName() << " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Invalid Grade: Grade too high.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Invalid Grade: Grade too low.";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return o;
}
