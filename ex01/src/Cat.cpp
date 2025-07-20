/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:03:09 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 15:35:36 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// default constructor
Cat::Cat() : Animal()
{
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
// Cat::Cat(const Cat& obj): Animal(obj)
// {
// 	*this = obj;
// 	std::cout << "Cat copy constructor called\n";
// }
Cat::Cat(const Cat& other) : Animal(other)
{
    this->catBrain = new Brain(*other.catBrain); // Deep copy of Brain
    std::cout << "Cat copy constructor called\n";
}

// copy assignment operator
Cat& Cat::operator=(const Cat& obj)
{
	if(this != &obj)
	{
		Animal::operator=(obj); // copy base class member
		delete this->catBrain; //Free the existing catBrain
		this->catBrain = new Brain(*obj.catBrain); // Deep copy of brain
	}
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