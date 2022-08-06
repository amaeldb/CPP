#include "Fixed.hpp"

Fixed::Fixed()
 : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = (i << deci);
}

Fixed::Fixed(const float i)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(i * (1 << deci));
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

std::ostream& operator<<(std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return out;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void Fixed::setRawBits(const int i)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = i;
}

int Fixed::toInt() const
{
	int i = this->rawBits >> this->deci;
	return (i);
}

float Fixed::toFloat() const
{
	float f = (float)this->rawBits / (1 << this->deci);
	return (f);
}
