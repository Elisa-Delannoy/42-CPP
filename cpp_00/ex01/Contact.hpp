/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:09:32 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/20 11:23:51 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	
	public:
		Contact();
		~Contact();

	void		set_first_name(const std::string &first_name);
	void		set_last_name(const std::string &last_name);
	void		set_nickname(const std::string &nickname);
	void		set_phone_number(const std::string &phone_number);
	void		set_darkest_secret(const std::string &darkest_secret);
	std::string	get_first_name(void)const;
	std::string	get_last_name(void)const;
	std::string	get_nickname(void)const;
	std::string	get_phone_number(void)const;
	std::string	get_darkest_secret(void)const;
};


#endif