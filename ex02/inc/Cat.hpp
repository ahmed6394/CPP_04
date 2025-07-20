/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:44:01 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 17:23:42 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* catBrain;
	public:
		Cat(); // default constructor
		Cat(std::string aType); //parameterized constructor
		Cat(const Cat& obj); // copy constructor
		Cat& operator=(const Cat& obj); // copy assignment operator
		~Cat(); // destructor

		void makeSound() const override; // override function
		Brain *getBrain();
};
