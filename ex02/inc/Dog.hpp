/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:34:19 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 14:08:10 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* dogBrain;
	public:
		Dog(); // default constructor
		Dog(std::string aType); // parameterized constructor
		Dog(const Dog& obj); // copy constructor
		Dog& operator=(const Dog& obj); // copy assingment operator
		~Dog();

		void makeSound() const;
		Brain *getBrain();
};
