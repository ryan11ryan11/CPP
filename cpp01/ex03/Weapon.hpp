/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:28:18 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/26 11:56:00 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private :
		std::string	_type;
	public :
		Weapon(std::string WeaponName);
		~Weapon();
		const 	std::string &getType() const;
		void	setType(std::string newtype);
};

#endif