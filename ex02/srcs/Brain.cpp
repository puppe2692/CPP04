/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:36:37 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 16:02:13 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << GREEN << "Brain Default Constructor call" << RESET << std::endl;
 	std::fill(_ideas, _ideas + 100, "Idee nulle");
	return;
}

Brain::Brain(std::string idea)
{
	std::cout << GREEN << "Brain Parameter Constructor call" << RESET << std::endl;
	std::fill(_ideas, _ideas + 100, idea);
	return;
}

Brain::Brain(Brain& other)
{
	std::cout << GREEN << "Brain Copy Constructor call" << RESET << std::endl;
	*this = other;
	return;
}

Brain::~Brain(void)
{
	std::cout << RED << "Brain Destructor call" << RESET << std::endl;
	return;
}

Brain& Brain::operator=(Brain& other)
{
	std::cout << "Brain = operator call" << std::endl;
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

std::string Brain::getIdea(size_t n)
{
	if (n < 0 || n > 99)
	{
		std::cout << YELLOW << "n must be between 0 and 99" << RESET << std::endl;
		return NULL;
	}
	else
		return (this->_ideas[n]);
}

void Brain::setIdea(std::string idea, size_t n)
{
	if (n < 0 || n > 99)
		std::cout << YELLOW << "n must be between 0 and 99" << RESET << std::endl;
	else
		this->_ideas[n] = idea;
}
