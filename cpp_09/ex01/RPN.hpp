/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:07:26 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/05 16:41:07 by edelanno         ###   ########.fr       */
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
		
		int		parse_input(char *argv);
		void	do_rpn(char *argv);
		bool	find_operators(char c, int temp1, int temp2);
	
};

#endif
