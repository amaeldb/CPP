#include "Animal.hpp"

Animal::Animal() : type("default")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &a) : type(a.type)
{
	std::cout << "Copy Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &a)
{
	std::cout << "Copy assignment Animal constructor called" << std::endl;
	type = a.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "*default animal sound*" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::setType(const std::string &s)
{
	type = s;
}