#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void printline()
{
	std::cout << std::endl << "------------------------------------------------------" << std::endl << std::endl;
}

void testShrub()
{
	Bureaucrat b1("John", 150), b2("Patrick", 145), b3("Steve", 137);
	ShrubberyCreationForm f("Versailles");

	std::cout << f;
	b1.signForm(f);
	b2.signForm(f);
	std::cout << f;
	f.setS(false);
	b2.executeForm(f);
	b3.executeForm(f);
	b3.signForm(f);
	b3.executeForm(f);
}

void testRobot()
{
	Bureaucrat b1("John", 150), b2("Patrick", 72), b3("Steve", 45);
	RobotomyRequestForm f("Donny");

	std::cout << f;
	b1.signForm(f);
	b2.signForm(f);
	std::cout << f;
	f.setS(false);
	b2.executeForm(f);
	b3.executeForm(f);
	b3.signForm(f);
	b3.executeForm(f);
}

void testPres()
{
	Bureaucrat b1("John", 150), b2("Patrick", 25), b3("Steve", 5);
	PresidentialPardonForm f("Martin");

	std::cout << f;
	b1.signForm(f);
	b2.signForm(f);
	std::cout << f;
	f.setS(false);
	b2.executeForm(f);
	b3.executeForm(f);
	b3.signForm(f);
	b3.executeForm(f);
}


int main()
{
	testShrub();
	printline();
	testRobot();
	printline();
	testPres();
}