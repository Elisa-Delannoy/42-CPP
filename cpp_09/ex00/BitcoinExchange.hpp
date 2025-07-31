/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:05:29 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/31 13:13:51 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include "iostream"
# include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_data;
		
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		const BitcoinExchange& operator=(const BitcoinExchange& copy);
		~BitcoinExchange();
		
		void	stock_data();

		void	check_input(std::string line);
		
};

#endif