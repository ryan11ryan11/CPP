/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:04:07 by junhhong          #+#    #+#             */
/*   Updated: 2024/11/08 15:06:16 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal :: Default constructor called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal &a)
{
	this->_type = a._type;
	std::cout << "Animal :: Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal :: Destructor called" << std::endl;
}

Animal& Animal::operator =(const Animal &a)
{
	this->_type = a._type;
	std::cout << "Animal :: operator = called" << std::endl;
	return *this;
}

void Animal::makeSound()const
{
	std::cout << "Animall :: Animal never cries" << std::endl;
}

std::string Animal::getType()const
{
	return (this->_type);
}