/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:45:15 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/23 19:30:40 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_first_name(std::string input)
{
	Contact::first_name = input;
}

void	Contact::set_last_name(std::string input)
{
	Contact::last_name = input;
}

void	Contact::set_nickname(std::string input)
{
	Contact::nickname = input;
}

void	Contact::set_phone_number(std::string input)
{
	Contact::phone_number = input;
}

void	Contact::set_darkest_secret(std::string input)
{
	Contact::darkest_secret = input;
}

void	Contact::set_index(int index)
{
	Contact::index = index;
}

int	Contact::get_index()
{
	return (this->index);
}

std::string	Contact::get_first_name()
{
	return (this->first_name);
}

std::string	Contact::get_last_name()
{
	return (this->last_name);
}

std::string	Contact::get_nickname()
{
	return (this->nickname);
}

// void	Contact::print_all(void)
// {
// 	std::cout << this->first_name;
// 	std::cout << this->last_name;
// 	std::cout << this->nickname;
// 	std::cout << this->phone_number;
// 	std::cout << this->darkest_secret;
// }