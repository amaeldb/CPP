#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	setType("wrong cat");
}

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal(a)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &a)
{
	std::cout << "WrongCat Copy assignment called" << std::endl;
	type = a.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "*woem*" << std::endl;
}