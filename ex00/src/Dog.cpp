/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:47:07 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/19 13:51:57 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// default constructor
Dog::Dog() : Animal()
{
	type = "Dog";
	
}

// perameterise constructor
Dog::Dog(std::string aType) : Animal()
{
	
}

// copy constructor
Dog::Dog(const Dog& obj) : Animal()
{
	
}

// copy assingment operator
Dog& Dog::operator=(const Dog& obj)
{
	
}

//destructor
Dog::~Dog()
{
	
}

void Dog::makeSound() const
{
	
}