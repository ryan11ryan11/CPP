/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:10:02 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/25 18:26:24 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	message;
	std::string	*stringPTR;
	
	message = "HI THIS IS BRAIN";
	stringPTR = &message;
	std::string& stringREF = message;

	std::cout << "string memory's address : "<< &message <<std::endl;
	std::cout << "string pointer's memory address : "<< stringPTR <<std::endl;
	std::cout << "string reference's memory address : "<< &stringREF <<std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << "string memory's value : "<< message <<std::endl;
	std::cout << "string pointer's value : "<< *stringPTR <<std::endl;
	std::cout << "string reference's value : "<< stringREF <<std::endl;

	return (0);
}