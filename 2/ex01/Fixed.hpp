/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:05:06 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/29 13:25:00 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{		
	private:
		int					_fixed;
		static const int	_bits;

	public:
		Fixed();
		Fixed(const Fixed& fixed);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed&	operator=(const Fixed& fixed);
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	};
	
std::ostream& operator<<(std::ostream& out, const Fixed& nb);

#endif