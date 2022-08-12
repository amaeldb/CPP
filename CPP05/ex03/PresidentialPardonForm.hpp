#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(const std::string &t);
		PresidentialPardonForm(const PresidentialPardonForm &a);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(const PresidentialPardonForm &a);

		void execute(const Bureaucrat &executor) const;

	private:
		const std::string target;
};

#endif
