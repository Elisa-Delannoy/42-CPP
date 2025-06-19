/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:14:56 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/19 17:17:38 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string		get_info()
{
	std::string	answer;

	std::getline(std::cin, answer);
	while (answer.empty())
	{
		std::cout << "Please enter information, can not be empty: ";
		std::getline(std::cin, answer);
	}
	return (answer);
		
}

Contact	create_contact()
{	
	Contact	contact;
	
	std::cout << "Your first name: ";
	contact.set_first_name(get_info());
	std::cout << "Your last name: ";
	contact.set_last_name(get_info());
	std::cout << "Your nickname: ";
	contact.set_nickname(get_info());
	std::cout << "Your phone number: ";
	contact.set_phone_number(get_info());
	std::cout << "Your darkest secret: ";
	contact.set_darkest_secret(get_info());
	std::cout << std::endl;
	return (contact);
}
void	display_contact()
{
	
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
		phonebook.display_contact();
	else if (cmd.compare("EXIT") == 0)  
		std::cout << "OK";
	else
		return (0);
	return (1);
}

int	main()
{
	PhoneBook	phonebook;
	// Contact		contacts;
	std::string	user_entry;

	while (1)
	{
		std::cout << "If you want to add a contact, write: \"ADD\"\n"
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
