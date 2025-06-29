/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:05:06 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/29 14:05:19 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{		
	private:
		int					_fixed;
		static const int	_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& fixed);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed&	operator=(const Fixed& fixed);
		bool 	operator>(const Fixed& a) const;
		bool 	operator<(const Fixed& a) const;
		bool 	operator>=(const Fixed& a) const;
		bool 	operator<=(const Fixed& a) const;
		bool 	operator==(const Fixed& a) const;
		bool 	operator!=(const Fixed& a) const;

		Fixed	operator+(const Fixed& a) const;
		Fixed	operator-(const Fixed& a) const;
		Fixed	operator*(const Fixed& a) const;
		Fixed	operator/(const Fixed& a) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);




		
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed& 	min(Fixed& a, Fixed& b);
		static const Fixed& 	min(const Fixed& a, const Fixed& b);
		static Fixed& 	max(Fixed& a, Fixed& b);
		static const Fixed& 	max(const Fixed& a, const Fixed& b);
	};
	
std::ostream& operator<<(std::ostream& out, const Fixed& nb);

#endif