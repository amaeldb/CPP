#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(const std::string &t);
		RobotomyRequestForm(const RobotomyRequestForm &a);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm &a);

		void execute(const Bureaucrat &executor) const;

	private:
		const std::string target;
};

#endif
