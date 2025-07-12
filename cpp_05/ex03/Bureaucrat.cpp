/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:07 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/12 23:00:55 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(100)
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& new_bureaucrat) 
{
	if (this != &new_bureaucrat)
		this->_grade = new_bureaucrat._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
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
		std::cerr << "Grade is already highest grade, impossible to increment" << std::endl;
	else
		this->_grade--;
}

void	Bureaucrat::decrement_b()
{
	if (this->_grade == 150)
		std::cerr << "Grade is already lowest grade, impossible to decrement" << std::endl;
	else
		this->_grade++;
}

void	Bureaucrat::signAForm(AForm& Aform)
{
	try
	{
		Aform.beSigned(*this);
		std::cout << this->_name << " signed " << Aform.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << Aform.getName() 
			<< " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & Aform) const
{
	try
	{
		Aform.check_exec(*this);
		Aform.execute(*this);
		std::cout << this->_name << " executed " << Aform.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't execute " << Aform.getName() 
			<< " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& name)
{
	out << name.getName() << ", bureaucrat grade " << name.getGrade();
	return (out);
}