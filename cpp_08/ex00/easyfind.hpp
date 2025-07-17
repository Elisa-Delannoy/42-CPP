/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:03:55 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/17 15:18:45 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

template<typename T>
typename T::const_iterator easyfind(const T& container, int to_find)
{
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it == to_find)
			return (it);
	}
	return (container.end());
}

#endif