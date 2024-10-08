/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:55:18 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/26 19:33:01 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	harl;

	std::cout << "Printing all harl could say." << std::endl << std::endl;
	harl.complain("error");
	std::cout << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	harl.complain("debug");
	std::cout << std::endl;
	harl.complain("something else");
	std::cout << std::endl;
	std::cout << "Now you have 5 chances to make harl say something." << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "input: ";
		std::string input;
		getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cerr << "^D" << std::endl;
			exit(1);
		}
		harl.complain(input);
		std::cout << std::endl;
	}
	return (0);
}