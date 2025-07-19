/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:24:48 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/19 13:20:52 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called\n";
}

Animal::Animal(std::string aType) : type(aType)
{
    std::cout << "Animal perameterise constructor called\n";
}

Animal::Animal(const Animal& obj) : type(obj.type)
{
    std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& obj)
{
    if(this != &obj)
    {
        type = obj.type;
    }
    std::cout << "Animal copy assignment operator called\n";
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal desstructor called\n";
}

 // virtual function
void Animal::makeSount() const
{
    std::cout << "Animal making sound\n";
}

std::string Animal::getType() const
{
    return type;
}