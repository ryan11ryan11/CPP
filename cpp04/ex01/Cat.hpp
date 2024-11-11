/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:02:50 by junhhong          #+#    #+#             */
/*   Updated: 2024/11/07 17:33:11 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	*_Brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &a);
		Cat &operator=(const Cat &a);
		void makeSound()const;
		std::string getType()const;
};