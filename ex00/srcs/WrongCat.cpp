/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:56:57 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:57:53 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Default Constructor call" << std::endl;
	this->_type = "WrongCat";
	return;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat Parameter Constructor call" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat& other)
{
	std::cout << "WrongCat Copy Constructor call" << std::endl;
	*this = other;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor call" << std::endl;
	return;
}

WrongCat& WrongCat::operator=(WrongCat& other)
{
	std::cout << "WrongCat = operator call" << std::endl;
	this->_type = other.getType();
	return (*this);
}

std::string WrongCat::getType(void) const
{
	return(this->_type);
}

void WrongCat::makeSound(void) const
{
	std::cout << "this " << this->_type << " make : Miaou Miaou" << std::endl;
	return;
}