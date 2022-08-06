#include "Fixed.hpp"

Fixed::Fixed()
 : rawBits(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i)
{
	//std::cout << "Int constructor called" << std::endl;
	this->rawBits = (i << deci);
}

Fixed::Fixed(const float i)
{
	//std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(i * (1 << deci));
}

Fixed::Fixed(const Fixed &f)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	//std::cout << "Copy assignment constructor called" << std::endl;
	this->rawBits = f.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed &f)
{
	return (this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed &f)
{
	return (this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed &f)
{
	return (this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f)
{
	return (this->toFloat() / f.toFloat());
}

bool Fixed::operator>(const Fixed &f)
{
	return (this->toFloat() > f.toFloat());
}

bool Fixed::operator<(const Fixed &f)
{
	return (this->toFloat() < f.toFloat());
}

bool Fixed::operator>=(const Fixed &f)
{
	return (this->toFloat() >= f.toFloat());
}

bool Fixed::operator<=(const Fixed &f)
{
	return (this->toFloat() <= f.toFloat());
}

bool Fixed::operator==(const Fixed &f)
{
	return (this->toFloat() == f.toFloat());
}

bool Fixed::operator!=(const Fixed &f)
{
	return (this->toFloat() != f.toFloat());
}

std::ostream& operator<<(std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return out;
}

Fixed Fixed::operator++()
{
	++rawBits;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	rawBits++;
	return (temp);
}

Fixed Fixed::operator--()
{
	--rawBits;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	rawBits--;
	return (temp);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
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

Fixed Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f2);
	return (f1);
}

Fixed Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f2);
	return (f1);
}

Fixed Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	return (f2);
}

Fixed Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	return (f2);
}
