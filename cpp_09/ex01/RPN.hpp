/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:07:26 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/06 13:36:23 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <algorithm>

class RPN
{
	private:
		std::stack<int>	_rpn;
		int				_operators;
		int				_nb;
		int				_value;

	public:
		RPN();
		RPN(const RPN& copy);
		const RPN& operator=(const RPN& copy);
		~RPN();
		
		int		ParseInput(char *argv);
		void	DoRpn(char *argv);
		bool	FindOperators(char c, int temp1, int temp2);
	
};

#endif
