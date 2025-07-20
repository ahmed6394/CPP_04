/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:34:19 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 17:23:24 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* dogBrain;
	public:
		Dog(); // default constructor
		Dog(std::string aType); // parameterized constructor
		Dog(const Dog& obj); // copy constructor
		Dog& operator=(const Dog& obj); // copy assingment operator
		~Dog();

		void makeSound() const override; // override the pure virtual function
		Brain *getBrain();
};
