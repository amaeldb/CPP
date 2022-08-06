#include "Fixed.hpp"
#include <iostream>
int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl;

	Fixed f1(5), f2(2);

	std::cout << f1 << " > " << f2 << " = " << (f1 > f2) << std::endl;
	std::cout << f1 << " < " << f2 << " = " << (f1 < f2) << std::endl;
	std::cout << f1 << " >= " << f2 << " = " << (f1 >= f2) << std::endl;
	std::cout << f1 << " <= " << f2 << " = " << (f1 <= f2) << std::endl;
	std::cout << f1 << " == " << f2 << " = " << (f1 == f2) << std::endl;
	std::cout << f1 << " != " << f2 << " = " << (f1 != f2) << std::endl << std::endl;

	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl << std::endl;

	std::cout << "++" << f1 << " = " << ++f1 << std::endl;
	std::cout << "--" << f1 << " = " << --f1 << std::endl;
	std::cout << f2-- << " to " << f2 << std::endl;
	std::cout << f2++ << " to " << f2 << std::endl << std::endl;

	std::cout << "Min of " << f1 << " and " << f2 << " = " << f1.min(f1, f2) << std::endl;
	std::cout << "Max of " << f1 << " and " << f2 << " = " << f1.max(f1, f2) << std::endl;

	return 0;
}