/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:46:28 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/10 18:38:11 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>


PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) :  AForm(copy)
{
	this->_target = copy._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& new_presidentiapardonform)
{
	if (this != &new_presidentiapardonform)
		this->_target = new_presidentiapardonform._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	(void) executor;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

