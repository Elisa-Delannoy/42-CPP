/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:49:26 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/10 11:56:32 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include <string>
# include <iostream>

class RobotomyRequestForm
{
	private:

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name, int grade);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& new_robotomyrequestform);
		~RobotomyRequestForm();

};


#endif