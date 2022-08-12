#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(const std::string &t);
		ShrubberyCreationForm(const ShrubberyCreationForm &a);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &a);

		void execute(const Bureaucrat &executor) const;

	private:
		const std::string target;
};

#endif
