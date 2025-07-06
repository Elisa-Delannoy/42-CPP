/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 20:13:09 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 15:37:04 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "default";
}

Brain::Brain(std::string idea)
{
	std::cout << "Idea Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
}

Brain::Brain (const Brain& copy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& new_brain)
{
	std::cout << "Assignment Brain called" << std::endl;
	if (this != &new_brain)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = new_brain._ideas[i];
	}
	return (*this);
}

std::string Brain::getFirstIdea() const
{
	return (this->_ideas[0]);
}