/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:24:48 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 16:07:25 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructor called\n";
}

AAnimal::AAnimal(std::string aType) : type(aType)
{
    std::cout << "AAnimal parameterized constructor called\n";
}

AAnimal::AAnimal(const AAnimal& obj) : type(obj.type)
{
    std::cout << "Animal copy constructor called\n";
}

AAnimal& AAnimal::operator=(const AAnimal& obj)
{
    if(this != &obj)
    {
        type = obj.type;
    }
    std::cout << "Animal copy assignment operator called\n";
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor called\n";
}

 // virtual function
void AAnimal::makeSound() const
{
    std::cout << "Animal making sound\n";
}

std::string AAnimal::getType() const
{
    return type;
}