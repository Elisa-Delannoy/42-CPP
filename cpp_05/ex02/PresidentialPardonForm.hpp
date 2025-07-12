/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:46:42 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/12 15:08:03 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& new_presidentiapardonform);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
};


#endif