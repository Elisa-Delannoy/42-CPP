/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:05:08 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/29 23:35:34 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixed(0)
{
}

Fixed::Fixed(const Fixed& fixed)
{
	this->_fixed = fixed.getRawBits();
}

Fixed::Fixed(const int nb)
{
	this->_fixed = nb << _bits;
}
Fixed::Fixed(const float nb)
{
	this->_fixed = (roundf(nb * (1 << _bits)));
}

Fixed::~Fixed()
{
}


Fixed&	Fixed::operator=(const Fixed& fixed)
{
	this->_fixed = fixed.getRawBits();
	return (*this);
}

bool 	Fixed::operator>(const Fixed& a) const
{
	return (this->_fixed > a.getRawBits());
}

bool 	Fixed::operator<(const Fixed& a) const
{
	return (this->_fixed < a.getRawBits());
}

bool 	Fixed::operator>=(const Fixed& a) const
{
	return (this->_fixed >= a.getRawBits());
}

bool 	Fixed::operator<=(const Fixed& a) const
{
	return (this->_fixed <= a.getRawBits());
}

bool 	Fixed::operator==(const Fixed& a) const
{
	return (this->_fixed == a.getRawBits());
}

bool 	Fixed::operator!=(const Fixed& a) const
{
	return (this->_fixed != a.getRawBits());
}
	
Fixed Fixed::operator+(const Fixed& a) const
{
	Fixed res;
	res.setRawBits(this->_fixed + a.getRawBits());
	return res;
}

Fixed	Fixed::operator-(const Fixed& a) const
{
	return (Fixed(this->_fixed - a.getRawBits()));
}

Fixed	Fixed::operator*(const Fixed& a) const
{
	Fixed res;
	int product = this->_fixed * a.getRawBits();
	res._fixed = product >> _bits;
	return(res);
}

Fixed	Fixed::operator/(const Fixed& a) const
{
	Fixed res;
	int	div = 0;
	if (a.getRawBits() != 0)
		div = (this->_fixed << _bits) / a.getRawBits();
	res.setRawBits(div);
	return(res);
}

Fixed&	Fixed::operator++()
{
	this->_fixed += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_fixed += 1;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this->_fixed -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_fixed -= 1;
	return (temp);
}


int		Fixed::getRawBits(void) const
{
	return (this->_fixed);
}
void	Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_fixed) / (1 << _bits));
}
int		Fixed::toInt(void) const
{
	return (this->_fixed >> _bits);
}

Fixed& 	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed& 	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed& 	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed& 	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

std::ostream& operator<<(std::ostream& out, const Fixed& nb)
{
	out << nb.toFloat();
	return (out);
}
