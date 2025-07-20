/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:02:40 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 17:26:08 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/AAnimal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/Brain.hpp"

int main() {
    // AAnimal animal; 
	// const AAnimal* dumm = new AAnimal();
	// This will now cause a compilation error

    AAnimal* dog = new Dog();
    dog->makeSound(); // Outputs: Woof! Woof!

    AAnimal* cat = new Cat();
    cat->makeSound(); // Outputs: Meow! Meow!

    delete dog;
    delete cat;

    return 0;
}