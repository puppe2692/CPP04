/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:00:03 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:44:18 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor call" << std::endl;
	this->_type = "Dog";
	return;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog Parameter Constructor call" << std::endl;
	return;
}

Dog::Dog(Dog& other)
{
	std::cout << "Dog Copy Constructor call" << std::endl;
	*this = other;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor call" << std::endl;
	return;
}

Dog& Dog::operator=(Dog& other)
{
	std::cout << "Dog = operator call" << std::endl;
	this->_type = other.getType();
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