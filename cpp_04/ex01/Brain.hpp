/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 20:13:11 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 15:00:09 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
# define BRAIN_CPP

# include <iostream>

class Brain
{
	protected:
		std::string	_ideas[100];

	public:
		Brain();
		Brain (const Brain& copy);
		~Brain();
		Brain& operator=(const Brain& new_brain);
		std::string	getFirstIdea() const;
};

#endif