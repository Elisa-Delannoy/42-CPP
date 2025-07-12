/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:23:15 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/12 18:16:02 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : _name("default"), _signed(false), _grade_sign(5), _grade_exec(20)
{
	std::cout << "default Form constructor called" << std::endl;
}

Form::Form(std::string name, int grade) : _name(name), _signed(false), _grade_sign(5), _grade_exec(20)
{
	std::cout << this->_name << " name and grade Form constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw Form::GradeTooHighException();
		else if (grade > 150)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form(const Form& copy) : _name(copy._name), _grade_sign(5), _grade_exec(20)
{
	std::cout << "copy Form constructor called" << std::endl;
	this->_signed = copy._signed;
}

Form& Form::operator=(const Form& new_form) 
{
	std::cout << "assignment operator Form constructor called" << std::endl;
	
	if (this != &new_form)
		this->_signed = new_form._signed;
	return (*this);
}

Form::~Form()
{
	std::cout << "default Form destructor called" << std::endl;
}


const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("his grade is too low\n");
}

const char* Form::AlreadySignedException::what() const throw()
{
	return ("it is already signed\n");
}

const std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getGradeSign() const
{
	return (this->_grade_sign);
}

int	Form::getGradeExec() const
{
	return (this->_grade_exec);
}

bool	Form::beSigned(const Bureaucrat& name)
{
	if (this->_signed == true)
		throw Form::AlreadySignedException();
	if (name.getGrade() <= this->_grade_sign)
		return(this->_signed = true);
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Form& name)
{
	std::string	sign_status;
	if (name.getSigned() == 1)
		sign_status = "signed";
	else
		sign_status = "not signed";
	out <<"Form: " << name.getName() << " is " << sign_status
		<< ", grade required to sign this form is " << name.getGradeSign()
		<< " and grade required to execute it is " << name.getGradeExec();
	return (out);
}