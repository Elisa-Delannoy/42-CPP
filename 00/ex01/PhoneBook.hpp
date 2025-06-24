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
	Contact	_list[8];
	int		_i;
	int		_count;

public:
	PhoneBook();
	~PhoneBook();

	void	add_contact(const Contact& contact);
	void	display_all_contact(void)const;
	void	display_one_contact(const int& index)const;
	void	column(std::string element, const int& j)const;
	void	check_index(void)const;
};

#endif