/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:51:53 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/15 16:04:15 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:
		virtual ~Base();

		Base*	generate(void);
		void 	identify(Base* p);
		void 	identify(Base& p);
};


#endif 