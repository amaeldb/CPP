#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern &a)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	(void) a;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &a)
{
	std::cout << "Intern Copy assignment constructor called" << std::endl;
	(void) a;
	return *this;
}

Form *Intern::makeForm(const std::string &n, const std::string &t) const
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *f[3] = {new ShrubberyCreationForm(t), new RobotomyRequestForm(t), new PresidentialPardonForm(t)}, *ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (n == forms[i])
			ret = f[i];
		else
			delete f[i];
	}
	if (ret)
	{
		std::cout << "Intern creates " << ret->getName() << std::endl;
		return ret;
	}
	std::cout << n << " form does not exist.";
	return NULL;
}
