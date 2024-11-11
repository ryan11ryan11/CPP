/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:38:23 by junhhong          #+#    #+#             */
/*   Updated: 2024/11/08 15:24:58 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *AnimalArr[10];
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout<<j->getType()<<std::endl;
	std::cout<<i->getType()<<std::endl;

	for (int i = 0; i<5; i++)
		AnimalArr[i] = new Dog();
	for (int i = 5; i<10; i++)
		AnimalArr[i] = new Cat();
	for (int i = 0; i<10; i++)
		std::cout<<AnimalArr[i]->getType()<<std::endl;
	for (int i = 0; i<10; i++)
		delete AnimalArr[i];
	return 0;
}
