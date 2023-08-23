/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:38:47 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/23 17:24:38 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << GREEN << "Cure Default Constructor call" << RESET << std::endl;
	return;
}

Cure::Cure(Cure& other)
{
	std::cout << GREEN << "Cure Copy Constructor call" << RESET << std::endl;
	*this = other;
	return;
}

Cure::~Cure(void)
{
	std::cout << RED << "Cure Destructor call" << RESET << std::endl;
	return;
}

Cure& Cure::operator=(Cure& other)
{
	std::cout << "Cure = operator call" << std::endl;
	this->_type = other._type;
	return (*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}

AMateria* Cure::clone() const
{
	AMateria* clone = new Cure;

	return(clone);
}