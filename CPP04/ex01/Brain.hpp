#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain &a);
		~Brain();

		Brain &operator=(const Brain &a);

		std::string ideas[100];
};

#endif
