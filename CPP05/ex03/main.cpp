#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void printline()
{
	std::cout << std::endl << "------------------------------------------------------" << std::endl << std::endl;
}

int main()
{
	Intern i;
	Form *f;

	f = i.makeForm("test", "test");
	if (f)
		std::cout << *f;
	delete f;
	printline();

	f = i.makeForm("shrubbery creation", "Babylon");
	if (f)
		std::cout << *f;
	delete f;
	printline();
	
	f = i.makeForm("robotomy request", "Teddy");
	if (f)
		std::cout << *f;
	delete f;
	printline();

	f = i.makeForm("presidential pardon", "Bob");
	if (f)
		std::cout << *f;
	delete f;
}