/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:34:19 by junhhong          #+#    #+#             */
/*   Updated: 2024/11/08 15:14:57 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this-> _type = "Dog";
	this-> _Brain = new Brain; 
	std::cout << "Dog :: default constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog :: default destructor called" << std::endl;
	delete this->_Brain;
}

Dog::Dog(const Dog &a) : Animal(a)
{
	this->_type = a._type;
	this->_Brain = a._Brain;
	std::cout << "Dog :: copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &a)
{
	std::cout << "Dog :: = operator called" << std::endl;
	if (this == &a)
		return *this;
	this->_type = a._type;
	this->_Brain = a._Brain;
	return *this;
}

std::string Dog::getType()const
{
	return (this->_type);
}

void Dog::makeSound()const
{
	std::cout << "woof-woof woof-woof woof-woof woof-woof woof-woof" << std::endl;
}
