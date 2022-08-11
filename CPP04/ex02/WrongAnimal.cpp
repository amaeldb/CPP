#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) : type(a.type)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	std::cout << "Copy assignment WrongAnimal constructor called" << std::endl;
	type = a.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*default wrong animal sound*" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::setType(const std::string &s)
{
	type = s;
}