/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:14:56 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/23 11:16:00 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <sstream>
#include <stdlib.h>

std::string	get_info(const bool& phone)
{
	std::string	answer;
	int			number;

	std::getline(std::cin, answer);
	while (answer.empty() || phone)
	{
		if (answer.empty())
			std::cout << "Can not be empty, please enter information: ";
		else if (phone)
		{
			std::stringstream	i_answer(answer);
			if (!(i_answer >> number))
				std::cout << "Invalid phone number (xx/xx/xx/xx/xx), please try again: ";
			else
				break;
		}
		std::getline(std::cin, answer);
	}
	return (answer);	
}

Contact	create_contact()
{	
	Contact	contact;
	
	std::cout << std::endl;
	std::cout << "Your first name: ";
	contact.set_first_name(get_info(0));
	std::cout << "Your last name: ";
	contact.set_last_name(get_info(0));
	std::cout << "Your nickname: ";
	contact.set_nickname(get_info(0));
	std::cout << "Your phone number: ";
	contact.set_phone_number(get_info(1));
	std::cout << "Your darkest secret: ";
	contact.set_darkest_secret(get_info(0));
	std::cout << std::endl;
	return (contact);
}

int	select_cmd(std::string cmd, PhoneBook& phonebook)
{
	Contact		contact;
	
	if (cmd.compare("ADD") == 0)  
	{
		contact = create_contact();
		phonebook.add_contact(contact);
	}
	else if (cmd.compare("SEARCH") == 0)  
		phonebook.display_all_contact();
	else if (cmd.compare("EXIT") == 0)  
		exit(0);
	else
		return (0);
	return (1);
}

int	main()
{
	PhoneBook	phonebook;
	std::string	user_entry;

	while (1)
	{
		std::cout << "MANAGE PHONEBOOK\n"
			"If you want to add a contact, write: \"ADD\"\n"
			"If you want to display a contact, write: \"SEARCH\"\n"
			"If you want to quit and delete your contacts, write: \"EXIT\"\n"
			"\nPlease write your choice: ";
		std::getline(std::cin, user_entry);
		while (user_entry.empty() || select_cmd(user_entry, phonebook) == 0)
		{
			std::cout << "Please write ADD, SEARCH or EXIT: ";
			std::getline(std::cin, user_entry);
		}	
	}
	return (0);
}
