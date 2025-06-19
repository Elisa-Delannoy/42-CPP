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

void	PhoneBook::column(std::string element, int	j)
{
	if (element.length() > 9)
		element.insert(9, ".");
	element.resize(10, ' ');
	std::cout << element;
	if (j == 0)
		std::cout << "|";
	else
		std::cout << "\n" << std::endl;
}

// void	PhoneBook::display_one_contact()
// {

// }

void	PhoneBook::display_all_contact()
{
	size_t	i;
	// std::string	test;

	i = 0;
	column("\nindex", 0);
	column("first name", 0);
	column("last name", 0);
	column("nickname", 1);
	while (i < 8 && !this->list[i].get_first_name().empty())
	{
		std::cout << i << "        |";
		column(this->list[i].get_first_name(), 0);
		column(this->list[i].get_last_name(), 0);
		column(this->list[i].get_nickname(), 1);
		// std::cout << this->list[i].get_first_name();
		i++;
	}
	if (i == 0)
		std::cout << "\nPhonebook is empty\n";
	else
	{
		std::cout << "Please select contact's index:";
		// std::cin >> test;
		// display_one_contact();
	}

		
	
	std::cout << std::endl;

}
