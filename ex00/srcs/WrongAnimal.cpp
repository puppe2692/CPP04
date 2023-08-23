/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:53:55 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:54:44 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Default Constructor call" << std::endl;
	this->_type = "Bete";
	return;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal Parameter Constructor call" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy Constructor call" << std::endl;
	*this = other;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor call" << std::endl;
	return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& other)
{
	std::cout << "WrongAnimal = operator call" << std::endl;
	this->_type = other.getType();
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return(this->_type);
}

void WrongAnimal::makeSound(void) const 
{
	std::cout << "this " << this->_type << " make a noise" << std::endl;
	return;
}