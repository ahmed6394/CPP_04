/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:39:09 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 15:34:49 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/Brain.hpp"

int main()
{
    // Create a Dog and set an idea
    Dog* dog1 = new Dog();
    dog1->getBrain()->setIdea(0, "Chase the ball");
    std::cout << "Dog1's first idea: " << dog1->getBrain()->getIdea(0) << std::endl;

    // Create a deep copy of the Dog
    Dog* dog2 = new Dog(*dog1);
    std::cout << "Dog2's first idea after copy: " << dog2->getBrain()->getIdea(0) << std::endl;

    // Modify the idea in the original Dog
    dog1->getBrain()->setIdea(0, "Bark at the mailman");
    std::cout << "Dog1's first idea after modification: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2's first idea after Dog1 modification: " << dog2->getBrain()->getIdea(0) << std::endl;

    // Clean up
    delete dog1;
    delete dog2;

    return 0;
}