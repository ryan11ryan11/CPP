/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:29:10 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/26 11:53:27 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	private :
		std::string	_name;
		Weapon		&_A_weapon;
	public :
		void	attack();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};