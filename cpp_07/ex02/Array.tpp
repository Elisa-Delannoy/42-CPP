/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:57:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/17 11:58:41 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"
# include <iostream>

template <typename T>
Array<T>::Array() : _arr(0), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]()), _size(n)
{
}

template <typename T>
Array<T>::Array(const Array& copy) : _arr(new T[copy._size]()), _size(copy._size) 
{
	for (unsigned int i = 0; i < copy._size; i++)
		this->_arr[i] = copy._arr[i];;
}

template <typename T>
const Array<T>& Array<T>::operator=(const Array& copy)
{
	this->_size = copy._size;
	if (this != &copy)
	{
		if (this->_arr)
			delete [] this->_arr;
		this->_arr = new T[this->_size];
		for (unsigned int i = 0; i < copy._size; i++)
			this->_arr[i] = copy._arr[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_arr;
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Index is out of bounds");
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
	if (i < this->_size)
		return (this->_arr[i]);
	throw OutOfBoundsException();
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i < this->_size)
		return (this->_arr[i]);
	throw OutOfBoundsException();
}

template <typename T>
size_t	Array<T>::size() const
{
	return (this->_size);
}

#endif