/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:34:19 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/19 13:46:48 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(); // default constructor
		Dog(std::string aType); // perameterise constructor
		Dog(const Dog& obj); // copy constructor
		Dog& operator=(const Dog& obj); // copy assingment operator
		~Dog();

		void makeSound() const;
};
