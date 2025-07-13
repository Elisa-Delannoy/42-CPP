/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:47:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/13 11:48:52 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& new_intern);
		~Intern();

		AForm*	makeForm(const std::string& name, const std::string& target);
};

#endif