/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:57:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/16 17:42:28 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array(const Array& copy) 
{
	
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& new_array)
{
	
}


template <typename T>
Array<T>::~Array()
{
	
}

#endif