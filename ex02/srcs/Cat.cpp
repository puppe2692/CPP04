/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:52:18 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 17:47:15 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	std::cout << GREEN << "Cat Default Constructor call" << RESET << std::endl;
	this->_type = "Cat";
	this->_Cerveau = new Brain;
	return;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << GREEN << "Cat Parameter Constructor call" << RESET << std::endl;
	this->_Cerveau = new Brain;
	return;
}

Cat::Cat(Cat& other)
{
	std::cout << GREEN << "Cat Copy Constructor call" << RESET << std::endl;
	this->_Cerveau = new Brain;
	*this = other;
	return;
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat Destructor call" << RESET << std::endl;
	delete _Cerveau;
	return;
}

Cat& Cat::operator=(Cat& other)
{
	std::cout << YELLOW << "Cat = operator call" << RESET << std::endl;
	this->_type = other.getType();
	delete this->_Cerveau;
	this->_Cerveau = new Brain;
	*(this->_Cerveau) = *(other._Cerveau);
	return (*this);
}

std::string Cat::getType(void) const
{
	return(this->_type);
}

void Cat::makeSound(void) const
{
	std::cout << "this " << this->_type << " make : Miaou Miaou" << std::endl;
	return;
}

std::string Cat::getIdea(size_t n)
{
	if (n < 0 || n > 99)
	{
		std::cout << YELLOW << "n must be between 0 and 99" << RESET << std::endl;
		return NULL;
	}
	else
		return (this->_Cerveau->getIdea(n));
}

void Cat::setIdea(std::string idea, size_t n)
{
	if (n < 0 || n > 99)
		std::cout << YELLOW << "n must be between 0 and 99" << RESET << std::endl;
	else
		this->_Cerveau->setIdea(idea, n);
}