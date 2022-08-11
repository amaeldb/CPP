#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	setType("cat");
}

Cat::Cat(const Cat &a) : Animal(a)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &a)
{
	std::cout << "Cat Copy assignment called" << std::endl;
	type = a.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "*meow*" << std::endl;
}