
#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		static const int	_fractional_bit;
		int					_fixed_pointer_num;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		~Fixed();
		Fixed	&operator = (const Fixed &a);
		int		getRawBits(void) const;
		void	setRawBits( int const raw );
};

#endif