/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:52:18 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:17:02 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor call" << std::endl;
	return;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat Parameter Constructor call" << std::endl;
	return;
}

Cat::Cat(Cat& other)
{
	std::cout << "Cat Copy Constructor call" << std::endl;
	*this = other;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor call" << std::endl;
	return;
}

Cat& Cat::operator=(Cat& other)
{
	std::cout << "Cat = operator call" << std::endl;
	this->_type = other.gettype();
	return (*this);
}

std::string Cat::gettype(void)
{
	return(this->_type);
}

void Cat::makeSound(void)
{
	std::cout << "this" << this->_type << " make : Miaou Miaou" << std::endl;
	return;
}