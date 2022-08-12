#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &t) : Form("Presidential Pardon Form: "+t, 25, 5), target(t)
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a) : Form(a), target(a.target)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a)
{
	std::cout << "PresidentialPardonForm Copy assignment constructor called" << std::endl;
	if (this == &a)
		return *this;
	setS(a.getS()); 
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getGtx())
		throw Form::GradeTooLowException();
	if (!getS())
		throw Form::isNotSigned();
	std::cout << target << " has received Zaphod Beeblebrox's presidential pardon." << std::endl;
}
