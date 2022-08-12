#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &t) : Form("Robotomy Request Form: "+t, 72, 45), target(t)
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a) : Form(a), target(a.target)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &a)
{
	std::cout << "RobotomyRequestForm Copy assignment constructor called" << std::endl;
	if (this == &a)
		return *this;
	setS(a.getS()); 
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getGtx())
		throw Form::GradeTooLowException();
	if (!getS())
		throw Form::isNotSigned();
	srand((unsigned int)time(NULL));
	int r = rand();
	std::cout << "*brrrzzzzt*" << std::endl;
	if (r % 2 == 1)
		std::cout << target << " has been robotomised." << std::endl;
	else
		std::cout << "Robotomy has failed..." << std::endl;
}
