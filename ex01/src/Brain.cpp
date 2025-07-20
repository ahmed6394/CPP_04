/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:43:14 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 18:07:43 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

// default constructor
Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
}

// parameterizedd constructor
Brain::Brain(std::string idea)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = idea;
	std::cout << "Brain parameterized constructor called\n";
}

// copy constructor
Brain::Brain(const Brain& obj)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	std::cout << "Brain copy constructor called\n";
}

// copy assignment operator
Brain& Brain::operator=(const Brain& obj)
{
    if(this != &obj)
	{
		for(int i =0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	std::cout << "Brain copy assignment operator called\n";
	return *this;
}

// destructor
Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
	{
		ideas[index] = idea;
	}
	else
	{
		std::cerr << "Index out of bounds\n";
	}
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
	{
		return ideas[index];
	}
	else
	{
		std::cerr << "Index out of bounds\n";
		return "";
	}
}