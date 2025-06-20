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
#include <sstream>

PhoneBook::PhoneBook(/* args */)
{
	this->i = 0;
	this->count = 0;
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
	if (this->count < 8)
		this->count++;
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

void	PhoneBook::display_one_contact(int index)
{
	std::cout << "First name: " << this->list[index].get_first_name() << "\n";
	std::cout << "Last name: " << this->list[index].get_last_name() << "\n";
	std::cout << "Nicnkname: " << this->list[index].get_nickname() << "\n";
	std::cout << "Phone number: " << this->list[index].get_phone_number() << "\n";
	std::cout << "Darkest secret: " << this->list[index].get_darkest_secret() << "\n";
	std::cout << std::endl;
}

void	PhoneBook::check_index()
{
	int					index;
	std::string			answer;
	
	while (1)
	{
		std::cout << "Please select contact's index: ";
		std::getline(std::cin, answer);
		std::stringstream	i_answer(answer);
		if (!(i_answer >> index))
			std::cout << "Index should be a number\n";
		else if (index > 0 && index <= this->count)
		{
			display_one_contact(index - 1);
			break;
		}
		else
		{
			if (this->count == 1)
				std::cout << "Index should be 1\n";
			else
				std::cout << "Index should be between 1 and " << this->count<< "\n";
		}		
	}
}

void	PhoneBook::display_all_contact()
{
	int	i;

	i = 0;
	column("\nindex", 0);
	column("first name", 0);
	column("last name", 0);
	column("nickname", 1);
	while (i < 8 && !this->list[i].get_first_name().empty())
	{
		std::cout << i + 1 << "        |";
		column(this->list[i].get_first_name(), 0);
		column(this->list[i].get_last_name(), 0);
		column(this->list[i].get_nickname(), 1);
		i++;
	}
	if (i == 0)
		std::cout << "\nPhonebook is empty\n";
	else
		check_index();
}
