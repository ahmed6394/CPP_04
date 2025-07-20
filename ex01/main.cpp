/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:39:09 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 18:24:45 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/Brain.hpp"

// mian function to test deep copy of dog class
// int main()
// {
//     // Create a Dog and set an idea
//     Dog* dog1 = new Dog();
//     dog1->getBrain()->setIdea(0, "Chase the ball");
//     std::cout << "Dog1's first idea: " << dog1->getBrain()->getIdea(0) << std::endl;

//     // Create a deep copy of the Dog
//     Dog* dog2 = new Dog(*dog1);
//     std::cout << "Dog2's first idea after copy: " << dog2->getBrain()->getIdea(0) << std::endl;

//     // Modify the idea in the original Dog
//     dog1->getBrain()->setIdea(0, "Bark at the mailman");
//     std::cout << "Dog1's first idea after modification: " << dog1->getBrain()->getIdea(0) << std::endl;
//     std::cout << "Dog2's first idea after Dog1 modification: " << dog2->getBrain()->getIdea(0) << std::endl;

//     // Clean up
//     delete dog1;
//     delete dog2;

//     return 0;
// }

// main from subject
/* int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	
	return 0;
} */

#define SIZE 5
int main( void )
{
    std::cout << "\n---Basic Tests---\n" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    std::cout << "\n---Array Tests---\n" << std::endl;
    Animal  *animals[SIZE];
    for(int a = 0; a < SIZE/2; a++)
        animals[a] = new Dog();
    for(int a = SIZE/2; a < SIZE; a++)
        animals[a] = new Cat();
    for(int a = 0; a < SIZE; a++)
        delete animals[a];
    std::cout << "\n---Deep copy Tests---\n" << std::endl;
    Dog *dog1 = new Dog();
    Dog dog3;
    Dog dog2(*dog1);
    dog1->getBrain()->setIdea(0, "what is this hooman doing!!!!");
    dog3 = *dog1;
    std::cout << "dog1 idea: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog3 idea: " << dog3.getBrain()->getIdea(0) << std::endl;
    delete (dog1);
    std::cout << "dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog3 idea: " << dog3.getBrain()->getIdea(0) << std::endl;
    return (0);
}