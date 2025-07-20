/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:43:14 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 13:03:42 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// default constructor
Brain::Brain() : Animal()
{
	std::cout << "Brain default constructor called\n";
}

// parameterizedd constructor
Brain::Brain(std::string idea) : Animal()
{
	ideas[0] = idea;
	std::cout << "Brain parameterized constructor called\n";
}

// copy constructor
Brain::Brain(const Brain& obj) : Animal()
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

std::string Brain::getIdea()
{
	std::string allIdeas;
	for(int i = 0; i < 100; i++)
	{
		if(!ideas[i].empty())
		{
			allIdeas += ideas[i] + "\n";
		}
	}
	return allIdeas;
}