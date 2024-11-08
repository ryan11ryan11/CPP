/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:22:33 by junhhong          #+#    #+#             */
/*   Updated: 2024/11/08 15:07:29 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
    std::cout << "WrongAnimal :: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	this->_type = a._type;
	std::cout << "WrongAnimal :: Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal :: Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal &a)
{
	this->_type = a._type;
	std::cout << "WrongAnimal :: operator = called" << std::endl;
	return *this;
}

void WrongAnimal::makeSound()const
{
	std::cout << "WrongAnimall :: WrongAnimal never cries" << std::endl;
}

std::string WrongAnimal::getType()const
{
	return (this->_type);
}