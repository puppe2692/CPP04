/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:38:38 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/23 18:52:50 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << GREEN << "AMateria Default Constructor call" << RESET << std::endl;
	return;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << GREEN << "AMateria Parameter Constructor call" << RESET << std::endl;
	return;
}

AMateria::AMateria(AMateria& other)
{
	std::cout << GREEN << "AMateria Copy Constructor call" << RESET << std::endl;
	*this = other;
	return;
}

AMateria::~AMateria(void)
{
	std::cout << RED << "AMateria Destructor call" << RESET << std::endl;
	return;
}

AMateria& AMateria::operator=(AMateria& other)
{
	std::cout << "AMateria = operator call" << std::endl;
	this->_type = other.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return(this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* is doing something to " << target.getName() << " *" << std::endl;
	return;
}