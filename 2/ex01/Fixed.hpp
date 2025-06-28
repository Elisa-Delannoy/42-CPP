/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:05:06 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/28 17:11:05 by edelanno         ###   ########.fr       */
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
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	};
	
std::ostream& operator<<(std::ostream& out, const Fixed& nb);

#endif