#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float i);
		Fixed(const Fixed &f);
		Fixed & operator = (const Fixed &f);
		~Fixed();

		int getRawBits() const;
		void setRawBits(const int raw);
		float toFloat() const;
		int toInt() const;
	
	private:
		int rawBits;
		const static int deci = 8;
};

std::ostream& operator<<(std::ostream &out, Fixed const &f);

#endif