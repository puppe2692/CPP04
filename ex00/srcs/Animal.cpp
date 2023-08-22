/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:32:57 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:16:12 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Default Constructor call" << std::endl;
	return;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal Parameter Constructor call" << std::endl;
	return;
}

Animal::Animal(Animal& other)
{
	std::cout << "Animal Copy Constructor call" << std::endl;
	*this = other;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor call" << std::endl;
	return;
}

Animal& Animal::operator=(Animal& other)
{
	std::cout << "Animal = operator call" << std::endl;
	this->_type = other.gettype();
	return (*this);
}

std::string Animal::gettype(void)
{
	return(this->_type);
}

void Animal::makeSound(void)
{
	std::cout << "this " << this->_type << " make a noise" << std::endl;
	return;
}