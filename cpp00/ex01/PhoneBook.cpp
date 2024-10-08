/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:49:36 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/25 13:32:22 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook::add(int index)
{
	std::string	input;
	
	contact[index].set_index(index);
	std::cout << "first name? ::";
	std::getline(std::cin, input);
	contact[index].set_first_name(input);
	std::cout << "last name? ::";
	std::getline(std::cin, input);
	contact[index].set_last_name(input);
	std::cout << "nickname? ::";
	std::getline(std::cin, input);
	contact[index].set_nickname(input);
	std::cout << "phonenumber? ::";
	std::getline(std::cin, input);
	contact[index].set_phone_number(input);
	std::cout << "darkest secret? ::";
	std::getline(std::cin, input);
	contact[index].set_darkest_secret(input);
}

std::string pretty_sentence(std::string sentence)
{
	if (sentence.length() <= 10)
		return (sentence + "|");
	else
	{
		sentence = sentence.substr(0, 9) + ".";
		return (sentence + "|");
	}
}

void	PhoneBook::search(int total)
{
	int	index;

	index = 0;
	if (total <= 0)
	{
		std::cout << "┌-------------------------------------------┐" << std::endl;
		std::cout << "|     index|first name| last name|  nickname|" << std::endl;
		std::cout << "└-------------------------------------------┘" << std::endl;
		return ;
	}
	std::cout << "┌-------------------------------------------┐" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while(index < total && index < 8)
	{
		std::cout << "|";
		std::cout << std::setw(10) << std::right;
		std::cout << contact[index].get_index() ;
		std::cout << "|";
		std::cout << std::setw(11) << std::right << pretty_sentence(contact[index].get_first_name());
		std::cout << std::setw(11) << std::right << pretty_sentence(contact[index].get_last_name());
		std::cout << std::setw(11) << std::right << pretty_sentence(contact[index].get_nickname());
		std::cout << std::endl;
		index++ ;
	}
	std::cout << "└-------------------------------------------┘" << std::endl;
}

// 모든 문장은 std::endl로 끝나야 함. 나중에 수정해야 한다.

