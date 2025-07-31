/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:05:29 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/31 17:43:19 by edelanno         ###   ########.fr       */
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
		std::map<int, int>				_date;
		
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		const BitcoinExchange& operator=(const BitcoinExchange& copy);
		~BitcoinExchange();
		
		void	StockData();

		float	CheckInput(std::string line);
		float	FindRate(std::string line, float value);
		int		CheckDate(std::string line, int *i);
		int		CheckPreviousDate(std::string line);
		
};

#endif