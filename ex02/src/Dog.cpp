/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:47:07 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 17:24:29 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// default constructor
Dog::Dog() : AAnimal()
{
	dogBrain = new Brain(); // allocate memory for brain
	type = "Dog";
	std::cout << "Dog default constructor called\n";
}

// parameterized constructor
Dog::Dog(std::string aType) : AAnimal()
{
	type = aType;
	std::cout << "Dog parameterized constructor called\n";
}

// copy constructor
Dog::Dog(const Dog& obj) : AAnimal(obj)
{
    dogBrain = new Brain(*obj.dogBrain); // Deep copy of Brain
	type = obj.type;
    std::cout << "Dog copy constructor called\n";
}


// copy assingment operator
Dog& Dog::operator=(const Dog& obj)
{
	if(this != &obj)
	{
		delete dogBrain; // free tthe existing brain
		AAnimal::operator=(obj); // copy the base class member
		dogBrain = new Brain(*obj.dogBrain); // Deep copy of brain
		type = obj.type;
	}
	std::cout << "Dog copy assignment operator called\n";
	return *this;
}

//destructor
Dog::~Dog()
{
	delete dogBrain;
	std::cout << "Dog destructor called\n";
}

// override function
void Dog::makeSound() const
{
	std::cout << "Woof Woof\n";
}

Brain* Dog::getBrain()
{
	return dogBrain;
}