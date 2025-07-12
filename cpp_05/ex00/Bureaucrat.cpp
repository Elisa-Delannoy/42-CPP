/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:07 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/12 23:02:02 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("default"), _grade(100)
{
	std::cout << "default bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	std::cout << this->_name << " name and grade bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& name)
{
	out << name.getName() << ", bureaucrat grade " << name.getGrade();
	return (out);
}