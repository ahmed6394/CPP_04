/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:03:09 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 15:48:47 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// default constructor
Cat::Cat() : Animal()
{
	catBrain = new Brain(); //allocate memory for cat
	type = "Cat";
	 std::cout << "Cat Default constructor called\n";
}

//parameterized constructor
Cat::Cat(std::string aType): Animal()
{
	type = aType;
	std::cout << "Cat parameterized constructor called\n";
}

// copy constructor
Cat::Cat(const Cat& obj) : Animal(obj)
{
    catBrain = new Brain(*obj.catBrain); // Deep copy of Brain
	type = obj.type;
    std::cout << "Cat copy constructor called\n";
}

// copy assignment operator
Cat& Cat::operator=(const Cat& obj)
{
	if(this != &obj)
	{
		delete catBrain; //Free the existing catBrain
		Animal::operator=(obj); // copy base class member
		catBrain = new Brain(*obj.catBrain); // Deep copy of brain
		type = obj.type;
	}
	std::cout << "Cat assignment operator called\n";
	return *this;
}

// destructor
Cat::~Cat()
{
	delete catBrain;
	std::cout << "Cat destructor called\n";
}


// override function
void Cat::makeSound() const
{
	std::cout << "Meow Meow\n";
} 

Brain* Cat::getBrain()
{
	return catBrain;
}