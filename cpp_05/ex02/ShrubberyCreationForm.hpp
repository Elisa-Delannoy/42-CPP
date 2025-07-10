/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:49:32 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/10 11:56:38 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>

class ShrubberyCreationForm
{
	private:

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name, int grade);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& new_shrubberycreationform);
		~ShrubberyCreationForm();

};


#endif