/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 10:38:12 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/19 10:38:17 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
	this->i = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact(Contact contact)
{
	if (this->i > 7)
		this->i = 0;
	this->list[this->i] = contact;
	this->i++;
}

void	PhoneBook::display_contact()
{
	size_t	i;

	i = 0;
	while (!this->list[i].get_first_name().empty())
	{
		std::cout << this->list[i].get_first_name();
		i++;
	}
	std::cout << "bonjour\n";
	std::cout << std::endl;
}
