/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:03:09 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/19 13:21:23 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// default constructor
Cat::Cat() : Animal()
{
	type = "Cat";
	 std::cout << "Cat Default constructor called\n";
}

//perameterise constructor
Cat::Cat(std::string aType): Animal()
{
	type = aType;
	std::cout << "Cat perameterise constructor called\n";
}

// copy constructor
Cat::Cat(const Cat& obj): Animal(obj)
{
	*this = obj;
	std::cout << "Cat copy constructor called\n";
}

// copy assignment operator
Cat& Cat::operator=(const Cat& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << "Cat assignment operator called\n";
	return *this;
}

// destructor
Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}


// override function
void Cat::makeSound() const
{
	std::cout << "Meow Meow\n";
} 