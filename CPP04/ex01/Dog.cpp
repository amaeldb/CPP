#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	setType("dog");
	b = new Brain;
}

Dog::Dog(const Dog &a) : Animal(a)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	b = new Brain(*a.b);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete b;
}

Dog &Dog::operator=(const Dog &a)
{
	std::cout << "Dog Copy assignment called" << std::endl;
	if (this == &a)
		return *this;
	delete b;
	b = new Brain(*a.b);
	type = a.type;
	return *this;
}

Animal &Dog::operator=(const Animal &a)
{
	std::cout << "Dog Animal Copy assignment called" << std::endl;
	if (this == &a)
		return *this;
	delete b;
	b = new Brain(*a.getB());
	type = a.getType();
	return *this;
}

Brain *Dog::getB() const
{
	return b;
}

void Dog::makeSound() const
{
	std::cout << "*woof*" << std::endl;
}