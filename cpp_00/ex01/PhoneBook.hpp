/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 10:38:40 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/19 10:39:38 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	list[8];
	int		i;

public:
	PhoneBook();
	~PhoneBook();

	void	add_contact(Contact contact);
	void	display_all_contact();
	void	display_one_contact();
	void	column(std::string element, int j);
};

#endif