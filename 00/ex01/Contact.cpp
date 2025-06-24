/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:09:29 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/23 10:25:37 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

Contact::~Contact()
{
}

void	Contact::set_first_name(const std::string& first_name)
{
	this->_first_name = first_name;
}

void	Contact::set_last_name(const std::string& last_name)
{
	this->_last_name = last_name;
}

void	Contact::set_nickname(const std::string& nickname)
{
	this->_nickname = nickname;
}

void	Contact::set_phone_number(const std::string& phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::set_darkest_secret(const std::string& darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string	Contact::get_first_name(void)const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void)const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void)const
{
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void)const
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void)const
{
	return (this->_darkest_secret);
}