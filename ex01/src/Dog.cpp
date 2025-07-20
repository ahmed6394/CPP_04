/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:47:07 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 15:17:14 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// default constructor
Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog default constructor called\n";
}

// parameterized constructor
Dog::Dog(std::string aType) : Animal()
{
	type = aType;
	std::cout << "Dog parameterized constructor called\n";
}

// copy constructor
// Dog::Dog(const Dog& obj) : Animal(obj)
// {
// 	*this = obj;
// 	std::cout << "Dog copy constructor called\n";
// }
Dog::Dog(const Dog& other) : Animal(other)
{
    this->dogBrain = new Brain(*other.dogBrain); // Deep copy of Brain
    std::cout << "Dog copy constructor called\n";
}


// copy assingment operator
Dog& Dog::operator=(const Dog& obj)
{
	if(this != &obj)
	{
		Animal::operator=(obj); // copy the base class member
		delete this->dogBrain; // free tthe existing brain
		this->dogBrain = new Brain(*obj.dogBrain); // Deep copy of brain
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