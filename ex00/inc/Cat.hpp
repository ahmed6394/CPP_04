/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:44:01 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/19 13:14:01 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(); // default constructor
		Cat(std::string aType); //perameterise constructor
		Cat(const Cat& obj); // copy constructor
		Cat& operator=(const Cat& obj); // copy assignment operator
		~Cat(); // destructor

		void makeSound() const; // override function
};
