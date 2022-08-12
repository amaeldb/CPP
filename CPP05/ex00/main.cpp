#include "Bureaucrat.hpp"

void printline()
{
	std::cout << std::endl << "------------------------------------------------------" << std::endl << std::endl;
}

int main()
{
	Bureaucrat *b1 = new Bureaucrat("Jerry", 1);

	std::cout << *b1 << std::endl << b1->getName() << " " << b1->getGrade() << std::endl;
	b1->incGrade();
	std::cout << *b1 << std::endl;
	b1->decGrade();
	std::cout << *b1 << std::endl;

	delete b1;

	printline();

	Bureaucrat *b2 = new Bureaucrat("Beth", 150);

	std::cout << *b2 << std::endl;
	b2->decGrade();
	std::cout << *b2 << std::endl;
	b2->incGrade();
	std::cout << *b2 << std::endl;

	delete b2;

	printline();

	Bureaucrat *b3 = new Bureaucrat("Tammy", 0);

	std::cout << *b3 << std::endl;

	delete b3;

	printline();

	Bureaucrat *b4 = new Bureaucrat("Arthricia", 200);

	std::cout << *b4 << std::endl;

	delete b4;
}