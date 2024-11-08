/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:04:01 by junhhong          #+#    #+#             */
/*   Updated: 2024/11/08 14:15:43 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &a);
		virtual ~Animal();
		Animal &operator =(const Animal &a);
		virtual void makeSound()const;
		std::string getType()const;
};