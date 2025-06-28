/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:05:08 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/28 19:12:56 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


Fixed::Fixed() : _fixed(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int nb)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fixed = nb << _bits;
}
Fixed::Fixed(const float nb)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fixed = static_cast<int>(roundf(nb * (1 << _bits)));
}



Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}



Fixed&	Fixed::operator=(const Fixed& fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;

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
	


Fixed	Fixed::operator+(const Fixed& a) const
{
	return(Fixed(this->_fixed + a.getRawBits()));
}

Fixed	Fixed::operator-(const Fixed& a) const
{
	return(Fixed(this->_fixed - a.getRawBits()));
}

Fixed	Fixed::operator*(const Fixed& a) const
{
	Fixed res;
	int nb = this->_fixed * a.getRawBits() >> _bits;
	res.setRawBits(nb);
	return(res);
}

Fixed	Fixed::operator/(const Fixed& a) const
{
	Fixed res;
	int	nb = 0;
	if (a.getRawBits() != 0)
		nb = (this->_fixed << _bits) / a.getRawBits();
	res.setRawBits(nb);
	return(res);
}

Fixed&	Fixed::operator++()
{
	this->_fixed += 1;
	return (*this);
}

Fixed&	Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_fixed += 1;
	return (temp);
}

// Fixed&	Fixed::operator--()
// {
	
// }

// Fixed&	Fixed::operator--(int)
// {
	
// }


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
	return static_cast<float>(this->_fixed) / (1 << _bits);
}
int		Fixed::toInt(void) const
{
	return (this->_fixed >> _bits);
}

// static Fixed& 	Fixed::min(Fixed& a, Fixed& b)
// {
	
// }
// static Fixed& 	Fixed::min(const Fixed& a, const Fixed& b);
// static Fixed& 	Fixed::max(Fixed& a, Fixed& b);
// static Fixed& 	Fixed::max(const Fixed& a, const Fixed& b);


std::ostream& operator<<(std::ostream& out, const Fixed& nb)
{
	out << nb.toFloat();
	return (out);
}