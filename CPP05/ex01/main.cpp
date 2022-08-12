#include "Bureaucrat.hpp"
#include "Form.hpp"

void printline()
{
	std::cout << std::endl << "------------------------------------------------------" << std::endl << std::endl;
}

int main()
{
	Form *f1 = new Form("Gardening", 10, 10);
	Bureaucrat *b1 = new Bureaucrat("Tony", 100), *b2 = new Bureaucrat("Rick", 10);

	std::cout << *f1;

	b1->signForm(*f1);
	std::cout << *f1;
	b2->signForm(*f1);
	std::cout << *f1;

	delete f1;
	delete b1;
	delete b2;

	printline();

	Form *f2 = new Form("Acquisition", 200, 0);
	std::cout << *f2;

	delete f2;

}