/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:46:56 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/23 19:34:00 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	int			index;
	int			total;
	std::string	input;

	total = 0;
	index = 0;
	while (input != "EXIT")
	{
		if (index > 7)
			index = index % 8;
		std::cout << "INPUT::";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			phonebook.add(index);
			total++ ;
			index++ ;
		}
		if (input == "SEARCH")
			phonebook.search(total);
	}
	return (0);
}

