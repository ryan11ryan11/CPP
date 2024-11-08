/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:34:37 by junhhong          #+#    #+#             */
/*   Updated: 2024/11/08 15:15:13 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal
{
	private:
	
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &a);
		Dog &operator=(const Dog &a);
		void makeSound()const;
		std::string getType()const;
};