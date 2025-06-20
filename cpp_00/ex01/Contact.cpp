/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:09:29 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/20 11:24:29 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

Contact::~Contact()
{
}

void	Contact::set_first_name(const std::string &first_name)
{
	this->first_name = first_name;
}

void	Contact::set_last_name(const std::string &last_name)
{
	this->last_name = last_name;
}

void	Contact::set_nickname(const std::string &nickname)
{
	this->nickname = nickname;
}

void	Contact::set_phone_number(const std::string &phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::set_darkest_secret(const std::string &darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string	Contact::get_first_name(void)const
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void)const
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void)const
{
	return (this->nickname);
}

std::string	Contact::get_phone_number(void)const
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret(void)const
{
	return (this->darkest_secret);
}