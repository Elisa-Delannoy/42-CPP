/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:03:55 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/28 14:21:13 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <sstream>
# include <algorithm>
# include <exception>

template<typename T>
typename T::const_iterator easyfind(const T& container, int to_find)
{
	typename T::const_iterator	it;

	it = std::find(container.begin(), container.end(), to_find);
	if (it == container.end())
	{
		std::ostringstream	error;
		error << to_find << " is not found";
		throw std::runtime_error(error.str());
	}
	std::cout << *it << " is found" << std::endl;
	return (it);
}

#endif
