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

PhoneBook::PhoneBook()
{
	this->i = 0;
	this->count = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact(const Contact& contact)
{
	if (this->i > 7)
		this->i = 0;
	this->list[this->i] = contact;
	this->i++;
	if (this->count < 8)
		this->count++;
}

void	PhoneBook::column(std::string element, const int& j)const
{
	if (element.length() > 10)
	{
		element.insert(9, ".");
		element.resize(10, ' ');
	}
	else
	{
		while (element.length() < 10)
			element.insert(0, " ");
	}
	std::cout << element;
	if (j == 0)
		std::cout << "|";
	else
		std::cout << std::endl;
}

void	PhoneBook::display_one_contact(const int& index)const
{
	std::cout << "First name: " << this->list[index].get_first_name() << "\n";
	std::cout << "Last name: " << this->list[index].get_last_name() << "\n";
	std::cout << "Nicnkname: " << this->list[index].get_nickname() << "\n";
	std::cout << "Phone number: " << this->list[index].get_phone_number() << "\n";
	std::cout << "Darkest secret: " << this->list[index].get_darkest_secret() << "\n";
	std::cout << std::endl;
}

void	PhoneBook::check_index(void)const
{
	int					index;
	std::string			answer;
	
	while (1)
	{
		std::cout << "\nPlease select contact's index: ";
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return ; 
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

void	PhoneBook::display_all_contact(void)const
{
	int	i;

	i = 0;
	while (i < 8 && !this->list[i].get_first_name().empty())
	{
		if (i == 0)
		{
			std::cout << "\n";
			column("index", 0);
			column("first name", 0);
			column("last name", 0);
			column("nickname", 1);
		}
		std::cout << "         " << i + 1 << "|";
		column(this->list[i].get_first_name(), 0);
		column(this->list[i].get_last_name(), 0);
		column(this->list[i].get_nickname(), 1);
		i++;
	}
	if (i == 0)
		std::cout << "\nPhonebook is empty\n" << std::endl;
	else
		check_index();
}
