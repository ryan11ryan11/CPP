/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:29:05 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/26 11:53:34 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _A_weapon(weapon)
{
	
}

HumanA::~HumanA()
{
	
}

void	HumanA::attack()
{
	std::cout << this->_A_weapon.getType() << std::endl;
}