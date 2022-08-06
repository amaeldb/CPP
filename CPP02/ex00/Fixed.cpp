#include "Fixed.hpp"

Fixed::Fixed()
 : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	this->rawBits = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void Fixed::setRawBits(const int i)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = i;
}