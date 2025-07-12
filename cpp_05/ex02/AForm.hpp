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
		AForm(std::string name, int grade_sign, int grade_exec);
		AForm(const AForm& copy);
		AForm& operator=(const AForm& new_aform);
		virtual ~AForm();

		virtual const std::string	getName() const;
		virtual bool				getSigned() const;
		virtual int					getGradeSign() const;
		virtual int					getGradeExec() const;
		virtual bool				beSigned(const Bureaucrat& name);
		void						check_exec(Bureaucrat const & executor) const;
		virtual void 				execute(Bureaucrat const & executor) const = 0;
		
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

		class	NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const AForm& name);

#endif