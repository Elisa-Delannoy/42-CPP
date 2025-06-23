/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:03:35 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/23 18:12:49 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>


class Zombie
{
	private:
	std::string	_name;
	
	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
	void	set_name(const std::string name);
};


#endif