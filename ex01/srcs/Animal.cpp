/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:32:57 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 14:46:07 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Animal.hpp"

Animal::Animal(void)
{
	std::cout << GREEN << "Animal Default Constructor call" << RESET << std::endl;
	this->_type = "Bete";
	return;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << GREEN << "Animal Parameter Constructor call" << RESET << std::endl;
	return;
}

Animal::Animal(Animal& other)
{
	std::cout << GREEN << "Animal Copy Constructor call" << RESET << std::endl;
	*this = other;
	return;
}

Animal::~Animal(void)
{
	std::cout << RED << "Animal Destructor call" << RESET << std::endl;
	return;
}

Animal& Animal::operator=(Animal& other)
{
	std::cout << "Animal = operator call" << std::endl;
	this->_type = other.getType();
	return (*this);
}

std::string Animal::getType(void) const
{
	return(this->_type);
}

void Animal::makeSound(void) const 
{
	std::cout << "this " << this->_type << " make a noise" << std::endl;
	return;
}