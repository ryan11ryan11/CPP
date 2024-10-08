/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:42:06 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/25 18:11:45 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde;
	horde = zombieHorde(5, "hello");

	for(int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}