/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:14:56 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/19 12:07:38 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"



// void	select_cmd(std::string cmd)
// {
// 	if (cmd.front() == 'A')
// 		std::cout << "OK";
		
// }



int	main(void)
{
	PhoneBook	repertoire;
	Contact		contacts;
	std::string	user_entry;
	
	std::cout << "If you want to add a contact, write : \"ADD\"\n"
				 "If you want to display a contact, write : \"SEARCH\"\n"
				 "If you want to quit and delete your contacts, write : \"EXIT\"\n"
				 "\nPlease write your choice : ";
	std::cin >> user_entry;
	if (user_entry.find("ADD"))
		std::cout << "OK";
	// select_cmd(user_entry);
	return (0);
}
