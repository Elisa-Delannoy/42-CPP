/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:23:18 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/09 17:38:47 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include <exception>


class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_exec;
		

	public:
		AForm();
		AForm(std::string name, int grade);
		AForm(const AForm& copy);
		AForm& operator=(const AForm& new_aform);
		virtual ~AForm();

		const std::string	getName() const;
		bool				getSigned() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		virtual bool		beSigned(const Bureaucrat& name) = 0;
		
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

		class	AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const AForm& name);

#endif