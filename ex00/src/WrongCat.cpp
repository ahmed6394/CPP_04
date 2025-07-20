/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:38:14 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 12:45:43 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

// default constructor
WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	 std::cout << "WrongCat Default constructor called\n";
}

//parameterized constructor
WrongCat::WrongCat(std::string aType): WrongAnimal()
{
	type = aType;
	std::cout << "WrongCat parameterized constructor called\n";
}

// copy constructor
WrongCat::WrongCat(const WrongCat& obj): WrongAnimal(obj)
{
	*this = obj;
	std::cout << "WrongCat copy constructor called\n";
}

// copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << "WrongCat assignment operator called\n";
	return *this;
}

// destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}


// override is not possible because makeSound is not virtualised in WrongAnimal
void WrongCat::makeSound() const
{
	std::cout << "Meow Meow\n";
} 