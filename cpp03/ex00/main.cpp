/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:37:15 by junhhong          #+#    #+#             */
/*   Updated: 2024/10/16 09:49:48 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("machine");
    ClapTrap b;
    b.beRepaired(1000);
    b.attack("test");

    int i = 0;
    while(i < 20)
    {
        a.attack("Russia");
        a.takeDamage(2);
        a.beRepaired(3);
        i++;
    }
}