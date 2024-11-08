/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:23:41 by junhhong          #+#    #+#             */
/*   Updated: 2024/11/08 14:28:25 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this-> _type = "WrongCat";
	std::cout << "WrongCat :: default constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat :: default destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal(a)
{
	this->_type = a._type;
	std::cout << "WrongCat :: copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &a)
{
	std::cout << "WrongCat :: = operator called" << std::endl;
    if (this == &a)
        return (*this);
    this->_type = a._type;
	return *this;
}

std::string WrongCat::getType()const
{
    return (this->_type);
}

void WrongCat::makeSound()const
{
	std::cout << "Meow Meow Meow Meow Meow Meow Meow Meow" << std::endl;
}
