/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:30:16 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/16 16:44:16 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *address, unsigned int len, void (*function)(T&))
{
	for (unsigned int i = 0; i < len; i++)
		function(address[i]);
	std::cout << "non const" << std::endl;
}

template<typename T>
void	iter(T *address, unsigned int len, void (*function)(const T&))
{
	for (unsigned int i = 0; i < len; i++)
		function(address[i]);
	std::cout << "const" << std::endl;
}

#endif
