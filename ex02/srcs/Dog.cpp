/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:00:03 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 17:48:50 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << GREEN << "Dog Default Constructor call" << RESET << std::endl;
	this->_type = "Dog";
	this->_Cerveau = new Brain;
	return;
}

Dog::Dog(std::string type) : Animal(type), _Cerveau(new Brain())
{
	std::cout << GREEN << "Dog Parameter Constructor call" << RESET << std::endl;
	return;
}

Dog::Dog(Dog& other)
{
	std::cout << GREEN << "Dog Copy Constructor call" << RESET << std::endl;
	this->_Cerveau = new Brain;
	*this = other;
	return;
}

Dog::~Dog(void)
{
	std::cout << RED << "Dog Destructor call" << RESET << std::endl;
	delete _Cerveau;
	return;
}

Dog& Dog::operator=(Dog& other)
{
	std::cout << YELLOW << "Dog = operator call" << RESET << std::endl;
	this->_type = other.getType();
	delete this->_Cerveau;
	this->_Cerveau = new Brain;
	*(this->_Cerveau) = *(other._Cerveau); // dereferencement

	return (*this);
}

std::string Dog::getType(void) const
{
	return(this->_type);
}

void Dog::makeSound(void) const
{
	std::cout << "this " << this->_type << " make : Waf Waf" << std::endl;
	return;
}

std::string Dog::getIdea(size_t n)
{
	if (n < 0 || n > 99)
	{
		std::cout << YELLOW << "n must be between 0 and 99" << RESET << std::endl;
		return NULL;
	}
	else
		return (this->_Cerveau->getIdea(n));
}

void Dog::setIdea(std::string idea, size_t n)
{
	if (n < 0 || n > 99)
		std::cout << YELLOW << "n must be between 0 and 99" << RESET << std::endl;
	else
		this->_Cerveau->setIdea(idea, n);
}

Brain* Dog::getBrain(void)
{
	return (this->_Cerveau);
}