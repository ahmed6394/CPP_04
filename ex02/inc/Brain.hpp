/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:43:31 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/20 16:33:33 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	
	public:
		Brain(); // default constructor
		Brain(std::string idea); // parameterizedd constructor
		Brain(const Brain& obj); // copy constructor
		Brain& operator=(const Brain& obj); // copy assignment operator
		~Brain(); // destructor
		
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};