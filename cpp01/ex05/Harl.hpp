/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:55:43 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/26 19:32:45 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>

class	Harl
{
	private :
		void	debug(void);
		void	info(void) ;
		void	warning(void);
		void	error(void);
	public :
		void	complain(std::string level);
};