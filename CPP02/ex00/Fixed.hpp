#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed & operator = (const Fixed &f);
		~Fixed();

		int getRawBits() const;
		void setRawBits(const int raw);
	
	private:
		int rawBits;
		const static int deci = 8;
};

#endif