#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	setType("cat");
	b = new Brain;
}

Cat::Cat(const Cat &a) : Animal(a)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	b = new Brain(*a.b);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete b;
}

Cat &Cat::operator=(const Cat &a)
{
	std::cout << "Cat Copy assignment called" << std::endl;
	if (this == &a)
		return *this;
	delete b;
	b = new Brain(*a.b);
	type = a.type;
	return *this;
}

Animal &Cat::operator=(const Animal &a)
{
	std::cout << "Cat Animal Copy assignment called" << std::endl;
	if (this == &a)
		return *this;
	delete b;
	b = new Brain(*a.getB());
	type = a.getType();
	return *this;
}

Brain *Cat::getB() const
{
	return b;
}

void Cat::makeSound() const
{
	std::cout << "*meow*" << std::endl;
}