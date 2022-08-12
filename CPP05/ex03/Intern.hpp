#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>

class Form;

class Intern
{
	public:
		Intern();
		Intern(const Intern &a);
		~Intern();

		Intern &operator=(const Intern &a);

		Form *makeForm(const std::string &n, const std::string &t) const;
};

#endif
