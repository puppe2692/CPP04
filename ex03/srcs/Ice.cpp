/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:38:52 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/25 11:11:44 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << GREEN << "Ice Default Constructor call" << RESET << std::endl;
	return;
}

Ice::Ice(Ice& other)
{
	std::cout << GREEN << "Ice Copy Constructor call" << RESET << std::endl;
	*this = other;
	return;
}

Ice::~Ice(void)
{
	std::cout << RED << "Ice Destructor call" << RESET << std::endl;
	return;
}

Ice& Ice::operator=(Ice& other)
{
	std::cout << "Ice = operator call" << std::endl;
	this->_type = other._type;
	return (*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}

AMateria* Ice::clone() const
{
	AMateria* clone = new Ice;

	return(clone);
}