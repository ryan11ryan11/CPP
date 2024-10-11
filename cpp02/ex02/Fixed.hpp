
#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		static const int	_fractional_bit;
		int					_fixed_pointer_num;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &obj);
		~Fixed();
		Fixed	&operator = (const Fixed &a);
		Fixed	operator ++ ();
		Fixed	operator -- ();
		Fixed	operator ++ (int);
		Fixed	operator -- (int);
		bool	operator > (const Fixed &a);
		bool	operator < (const Fixed &a);
		bool	operator >= (const Fixed &a);
		bool	operator <= (const Fixed &a);
		bool	operator == (const Fixed &a);
		bool	operator != (const Fixed &a);
		float	operator + (const Fixed &a);
		float	operator - (const Fixed &a);
		float	operator / (const Fixed &a);
		float	operator * (const Fixed &a);
		int		getRawBits(void) const;
		void	setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt( void ) const;
		friend 	std::ostream	&operator<<(std::ostream &out, const Fixed &self);
	
};

#endif