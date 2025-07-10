/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:07 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/09 17:38:28 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(100)
{
	std::cout << "default bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << this->_name << " name and grade bureaucrat constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade)
{
	std::cout << "copy bureaucrat constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& new_bureaucrat) 
{
	std::cout << "assignment operator bureaucrat constructor called" << std::endl;
	
	if (this != &new_bureaucrat)
		this->_grade = new_bureaucrat._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "default bureaucrat destructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void  Bureaucrat::increment_b()
{
	if (this->_grade == 1)
		std::cout << "Grade is already highest grade, impossible to increment" << std::endl;
	else
		this->_grade--;
}

void	Bureaucrat::decrement_b()
{
	if (this->_grade == 150)
		std::cout << "Grade is already lowest grade, impossible to decrement" << std::endl;
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() 
			<< " beacause " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& name)
{
	out << name.getName() << ", bureaucrat grade " << name.getGrade();
	return (out);
}