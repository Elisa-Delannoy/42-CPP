/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:23:15 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/09 17:40:38 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm() : _name("default"), _signed(false), _grade_sign(5), _grade_exec(20)
{
}

AForm::AForm(std::string name,int grade_sign, int grade_exec) : _name(name), _signed(false),
													_grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (_grade_sign < 1 || _grade_exec < 1)
			throw AForm::GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exec > 150)
			throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy) : _name(copy._name), _grade_sign(copy._grade_sign), _grade_exec(copy._grade_exec)
{
	this->_signed = copy._signed;
}

AForm& AForm::operator=(const AForm& new_aform) 
{
	if (this != &new_aform)
		this->_signed = new_aform._signed;
	return (*this);
}

AForm::~AForm()
{
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("his grade is too low");
}

const char* AForm::AlreadySignedException::what() const throw()
{
	return ("it is already signed");
}

const char* AForm::NotSignedException::what() const throw()
{
	return ("it is not signed");
}
const std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getGradeSign() const
{
	return (this->_grade_sign);
}

int	AForm::getGradeExec() const
{
	return (this->_grade_exec);
}

bool	AForm::beSigned(const Bureaucrat& name)
{
	if (this->_signed == true)
		throw AForm::AlreadySignedException();
	if (name.getGrade() <= this->_grade_sign)
		return(this->_signed = true);
	else
		throw AForm::GradeTooLowException();
}

void	AForm::check_exec(Bureaucrat const & executor) const
{
	if(!getSigned())
		throw AForm::NotSignedException();
	if (executor.getGrade() > getGradeExec())
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const AForm& name)
{
	std::string	sign_status;
	if (name.getSigned() == 1)
		sign_status = "signed";
	else
		sign_status = "not signed";
	out <<"AForm: " << name.getName() << " is " << sign_status
		<< ", grade required to sign this Aform is " << name.getGradeSign()
		<< " and grade required to execute it is " << name.getGradeExec();
	return (out);
}
