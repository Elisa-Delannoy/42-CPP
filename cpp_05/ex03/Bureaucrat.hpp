/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:12 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/12 15:44:32 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
	
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& new_bureaucrat);
		~Bureaucrat();
	
		const std::string	getName() const;
		int					getGrade() const;
		void				increment_b();
		void				decrement_b();
		void				signAForm(AForm& AForm);
		void				executeForm(AForm const & AForm) const;
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& name);

#endif