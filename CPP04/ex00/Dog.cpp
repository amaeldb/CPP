#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	setType("dog");
}

Dog::Dog(const Dog &a) : Animal(a)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &a)
{
	std::cout << "Dog Copy assignment called" << std::endl;
	type = a.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "*woof*" << std::endl;
}