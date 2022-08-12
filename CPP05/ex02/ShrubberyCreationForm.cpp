#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &t) : Form("Shrubbery Creation Form: "+t, 145, 137), target(t)
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a) : Form(a), target(a.target)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a)
{
	std::cout << "ShrubberyCreationForm Copy assignment constructor called" << std::endl;
	if (this == &a)
		return *this;
	setS(a.getS()); 
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getGtx())
		throw Form::GradeTooLowException();
	if (!getS())
		throw Form::isNotSigned();
	std::ofstream f(target+"_shrubbery");
	f << "   oxoxoo    ooxoo       "
		 "\n  ooxoxo oo  oxoxooo   "
		 "\n oooo xxoxoo ooo ooox       ccee88oo"
		 "\n oxo o oxoxo  xoxxoxo    C8O8O8Q8PoOb o8oo"
		 "\n  oxo xooxoooo o ooo    dOB69QO8PdUOpugoO9bD"
		 "\n    ooo\\oo\\  /o/o    CgggbU8OU qOp qOdoUOdcb"
		 "\n        \\  \\/ /          6OuU  /p u gcoUodpP"
		 "\n         |   /               \\\\\\//  /douUP"
		 "\n         |  |                  \\\\\\////"
		 "\n         | D|                   |||/\\"
		 "\n         |  |                   |||\\/"
		 "\n         |  |                   |||||"
		 "\n  ______/____\\_________________//||||\\____";
	f.close();
}
