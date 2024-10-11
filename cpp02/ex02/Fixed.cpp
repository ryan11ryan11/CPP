
#include "Fixed.hpp"

const int Fixed::_fractional_bit = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_pointer_num = 0;
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
	this->_fixed_pointer_num = other._fixed_pointer_num;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &self)
{
	out << self.toFloat();
	return (out);
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called." << std::endl;
	this->_fixed_pointer_num = num << _fractional_bit;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called." << std::endl;
	_fixed_pointer_num = roundf(num * (1 << _fractional_bit));
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

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_fixed_pointer_num / static_cast<float>(1 << _fractional_bit)));
}

int		Fixed::toInt(void) const
{
	return (static_cast<int>(_fixed_pointer_num >> _fractional_bit));
}

bool	Fixed::operator > (const Fixed &a)
{
	if (this->_fixed_pointer_num > a._fixed_pointer_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator >= (const Fixed &a)
{
	if (this->_fixed_pointer_num >= a._fixed_pointer_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator < (const Fixed &a)
{
	if (this->_fixed_pointer_num < a._fixed_pointer_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator <= (const Fixed &a)
{
	if (this->_fixed_pointer_num <= a._fixed_pointer_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator == (const Fixed &a)
{
	if (this->_fixed_pointer_num == a._fixed_pointer_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator != (const Fixed &a)
{
	if (this->_fixed_pointer_num != a._fixed_pointer_num)
		return (true);
	else
		return (false);
}

float	Fixed::operator + (const Fixed &a)
{
	return (this->toFloat() + a.toFloat());
}

float	Fixed::operator - (const Fixed &a)
{
	return (this->toFloat() - a.toFloat());
}

float	Fixed::operator * (const Fixed &a)
{
	return (this->toFloat() * a.toFloat());
}

float	Fixed::operator / (const Fixed &a)
{
	return (this->toFloat() / a.toFloat());
}

Fixed Fixed::operator ++ ()
{
	this->_fixed_pointer_num++;
	return (*this);
}

Fixed Fixed::operator -- ()
{
	this->_fixed_pointer_num--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed	temp;
	temp = *this;
	this->_fixed_pointer_num++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp;
	temp = *this;
	this->_fixed_pointer_num--;
	return (temp);
}