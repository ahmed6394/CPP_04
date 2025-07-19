/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:37:52 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/19 17:05:16 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/WrongAnimal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	std::cout <<"\nTest with wrong animal and wrong cat" << std::endl;
	const WrongAnimal* wMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat("Fox");
	std::cout << k->getType() << " " << std::endl;
	k->makeSound(); //will output the cat sound!
	wMeta->makeSound();
	delete wMeta;
	delete k;
	
	return 0;
}