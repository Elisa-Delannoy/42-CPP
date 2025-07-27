/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:03:55 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/21 15:48:22 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<typename T>
typename InputIterator easyfind(const T& container, int to_find)
{
  while (first!=last) {
    if (*first==val) return first;
    ++first;
  }
  return last;
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