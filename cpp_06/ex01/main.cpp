/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:17:05 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/15 15:33:29 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data	ptr;

	ptr.a = 10;
	uintptr_t	value = Serializer::serialize(&ptr);
	std::cout << value << std::endl;
	Data*	bis = Serializer::deserialize(value);
	std::cout << bis->a << std::endl;
}