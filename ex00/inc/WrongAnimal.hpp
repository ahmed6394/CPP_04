/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:17:18 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/19 16:18:41 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(); // default constructor
        WrongAnimal(std::string aType); // parameterized constructor
        WrongAnimal(const WrongAnimal& obj); // copy constructor
        WrongAnimal& operator=(const WrongAnimal& obj); // copy assignment operator
        ~WrongAnimal(); // virtual destructor

        void makeSound() const; // virtual function
        std::string getType() const;
};