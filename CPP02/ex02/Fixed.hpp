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
		~Fixed();

		Fixed & operator = (const Fixed &f);
		Fixed operator+(const Fixed &f);
		Fixed operator-(const Fixed &f);
		Fixed operator*(const Fixed &f);
		Fixed operator/(const Fixed &f);
		bool operator>(const Fixed &f);
		bool operator<(const Fixed &f);
		bool operator>=(const Fixed &f);
		bool operator<=(const Fixed &f);
		bool operator==(const Fixed &f);
		bool operator!=(const Fixed &f);

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		int getRawBits() const;
		void setRawBits(const int raw);
		float toFloat() const;
		int toInt() const;
		static Fixed min(Fixed &f1, Fixed &f2);
		static Fixed min(const Fixed &f1, const Fixed &f2);
		static Fixed max(Fixed &f1, Fixed &f2);
		static Fixed max(const Fixed &f1, const Fixed &f2);
	
	private:
		int rawBits;
		const static int deci = 8;
};

std::ostream& operator<<(std::ostream &out, Fixed const &f);

#endif