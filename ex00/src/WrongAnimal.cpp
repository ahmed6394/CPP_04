/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:26:46 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/19 16:38:56 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(std::string aType) : type(aType)
{
    std::cout << "WrongAnimal perameterise constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) : type(obj.type)
{
    std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    if(this != &obj)
    {
        type = obj.type;
    }
    std::cout << "WrongAnimal copy assignment operator called\n";
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

 // not virtual function for testing polymorphism is not working 
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal making wrong sound\n";
}

std::string WrongAnimal::getType() const
{
    return type;
}