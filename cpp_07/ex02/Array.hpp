/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:53:17 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/17 11:08:49 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<typename T>
class Array
{
	private:
	T*		_arr;
	size_t	_size;
	
	public:
	Array();
	Array(unsigned int n);
	Array(const Array& copy);
	const Array& operator=(const Array& copy);
	~Array();

	const T& operator[](unsigned int i) const;
	T& operator[](unsigned int i);
	size_t	size() const;
	
	class OutOfBoundsException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

#include "Array.tpp"

#endif