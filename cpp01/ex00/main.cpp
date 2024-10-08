/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:42:06 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/25 18:11:52 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *new_zombie;

	new_zombie = newZombie("firstone");
	new_zombie->announce();
	randomChump("randomChump");

	delete (new_zombie);
	return (0);
}