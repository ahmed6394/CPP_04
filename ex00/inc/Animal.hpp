/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:10:44 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 12:45:43 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(); // default constructor
        Animal(std::string aType); // parameterized constructor
        Animal(const Animal& obj); // copy constructor
        Animal& operator=(const Animal& obj); // copy assignment operator
        virtual ~Animal(); // virtual destructor

        virtual void makeSound() const; // virtual function
        std::string getType() const;
};