/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:34:19 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/26 19:53:56 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

typedef enum level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
}	level;

class Harl
{
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);		
		
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif