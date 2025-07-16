/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:28:56 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/16 14:01:38 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T& a, T& b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp; 
	return;
}

template<typename T>
T	min(T a, T b)
{
	return (a >= b ? b : a);
}

template<typename T>
T	max(T a, T b)
{
	return (a > b ? a : b);
}

#endif