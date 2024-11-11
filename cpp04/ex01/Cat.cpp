/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:03:39 by junhhong          #+#    #+#             */
/*   Updated: 2024/11/08 13:06:07 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this-> _type = "Cat";
	this-> _Brain = new Brain;
	std::cout << "Cat :: default constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat :: default destructor called" << std::endl;
	delete this->_Brain;
}

Cat::Cat(const Cat &a) : Animal(a)
{
	this->_type = a._type;
	this->_Brain = a._Brain;
	std::cout << "Cat :: copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &a)
{
	std::cout << "Cat :: = operator called" << std::endl;
	if (this == &a)
		return (*this);
	this->_Brain = a._Brain;
	this->_type = a._type;
	return *this;
}

std::string Cat::getType()const
{
    return (this->_type);
}

void Cat::makeSound()const
{
	std::cout << "Meow Meow Meow Meow Meow Meow Meow Meow" << std::endl;
}
