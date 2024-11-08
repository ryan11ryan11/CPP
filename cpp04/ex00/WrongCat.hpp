/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:24:33 by junhhong          #+#    #+#             */
/*   Updated: 2024/11/08 14:28:23 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	private:
	
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &a);
		WrongCat &operator=(const WrongCat &a);
		void makeSound()const;
		std::string getType()const;
};