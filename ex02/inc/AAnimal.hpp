/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:05:11 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 16:40:30 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal(); // default constructor
        AAnimal(std::string aType); // parameterized constructor
        AAnimal(const AAnimal& obj); // copy constructor
        AAnimal& operator=(const AAnimal& obj); // copy assignment operator
        virtual ~AAnimal(); // virtual destructor

        virtual void makeSound() const = 0; // pure virtual function
        std::string getType() const;
};