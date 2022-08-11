#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &a)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = a.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &a)
{
	std::cout << "Brain Copy assignment constructor called" << std::endl;
	if (this == &a)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
	return *this;
}
