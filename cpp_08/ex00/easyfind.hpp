/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:03:55 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/28 09:54:06 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<typename T>
typename T::const_iterator easyfind(const T& container, int to_find)
{
	typename T::const_iterator	it;

	it = std::find(container.begin(), container.end(), to_find);
	if (it != container.end())
		std::cout << *it << " is found" << std::endl;
	else
		std::cout << to_find << " is not found" << std::endl;
	return (it);
}

// template<typename T>
// typename T::const_iterator easyfind(const T& container, int to_find)
// {
// 	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
// 	{
// 		if (*it == to_find)
// 			return (it);
// 	}
// 	return (container.end());
// }

#endif