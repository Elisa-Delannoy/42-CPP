/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:05:06 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/27 16:29:16 by edelanno         ###   ########.fr       */
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
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed&	operator=(const Fixed& fixed);
};

#endif