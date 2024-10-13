#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed c;
	a = c;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	// if (c < b)
	// 	std::cout << "c < b" << std::endl;
	// else
	// 	std::cout << "b < c" << std::endl;
	std::cout << "here " << Fixed::max(a, b) << std::endl;
	return 0;
}