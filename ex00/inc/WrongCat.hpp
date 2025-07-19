/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:20:09 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/19 16:20:19 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(); // default constructor
		WrongCat(std::string aType); //perameterise constructor
		WrongCat(const WrongCat& obj); // copy constructor
		WrongCat& operator=(const WrongCat& obj); // copy assignment operator
		~WrongCat(); // destructor

		void makeSound() const; // override function
};
