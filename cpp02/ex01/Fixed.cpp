
#include "Fixed.hpp"

const int Fixed::_fractional_bit = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_pointer_num = 0;
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_fixed_pointer_num = other._fixed_pointer_num;
	return (*this);
}

Fixed::Fixed(const int num)
{
	return ()
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = obj;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_pointer_num);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_pointer_num = raw;
}