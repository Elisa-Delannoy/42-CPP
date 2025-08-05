/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:07:23 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/05 16:42:24 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	this->_nb = 0;
	this->_operators = 0;
}

RPN::RPN(const RPN& copy)
{
	*this = copy;
}

const RPN& RPN::operator=(const RPN& copy)
{
	if (this != &copy)
	{
		this->_rpn = copy._rpn;
		this->_operators = copy._operators;
		this->_nb = copy._nb;
	}
	return (*this);
}

RPN::~RPN()
{
}

int	RPN::parse_input(char *argv)
{
	std::string	input = argv;
	std::string	operators = "+-/*";
	
	for (size_t i = 0; i < input.size(); i++)
	{
		if (i < input.size() - 1 && isdigit(input[i]) != 0 && input[i + 1] == ' ')
		{
			this->_nb++;
			i++;
		}
		else if (i > 3 && std::find(operators.begin(), operators.end(), input[i]) != operators.end()
			&& (i == input.size() -1 || input[i + 1] == ' '))
		{
			this->_operators++;
			i++;
		}
		else
			return (std::cerr << "Error: invalid character for RPN" << std::endl, 0);
	}
	if (_operators + 1 != _nb)
		return (std::cerr << "Error: no matching operands/operators" << std::endl, 0);
	return (1);
}

void	RPN::do_rpn(char *argv)
{
	std::string	input = argv;
	int			temp1;
	int			temp2;
	
	for (size_t i = 0; i < input.size(); i++)
	{
		if (isdigit(input[i]) != 0)
			this->_rpn.push((input[i]) - 48);
		else if (input[i] != ' ')
		{
			temp1 = _rpn.top();
			_rpn.pop();
			temp2 = _rpn.top();
			_rpn.pop();
			find_operators(input[i], temp1, temp2);
		}
	}
	std::cout << _rpn.top() << std::endl;
}

bool	RPN::find_operators(char c, int temp1, int temp2)
{
	if (c == '+') 
		_value = temp1 + temp2;
	if (c == '-')
		_value = temp2 - temp1;
	if (c == '/')
	{
		if (temp1 == 0)
			return (std::cerr << "Error: impossible to divide by 0" << std::endl, false);
		_value = temp2 / temp1;
	}
	if (c == '*')
		_value = temp1 * temp2;
	_rpn.push(_value);
	return (true);
}