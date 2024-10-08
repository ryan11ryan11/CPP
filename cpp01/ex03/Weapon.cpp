/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:28:06 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/26 11:34:17 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string newtype)
{
	this->_type = newtype;
}

Weapon::Weapon(std::string WeaponName)
{
	this->setType(WeaponName);
}

Weapon::~Weapon()
{

}