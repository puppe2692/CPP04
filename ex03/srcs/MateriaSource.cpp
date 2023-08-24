/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:39:03 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/24 16:45:21 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << GREEN << "MateriaSource Default Constructor call" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		this->_spellBook[i] = NULL;
	return;
}

MateriaSource::MateriaSource(MateriaSource& other)
{
	std::cout << GREEN << "MateriaSource Copy Constructor call" << RESET << std::endl;
	*this = other;
	return;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << RED << "MateriaSource Destructor call" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_spellBook[i])
			delete this->_spellBook[i];
	}
	return;
}

MateriaSource& MateriaSource::operator=(MateriaSource& other)
{
	std::cout << "MateriaSource operator = call" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_spellBook[i])
			{
				delete this->_spellBook[i];
			}
			this->_spellBook[i] = other._spellBook[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_spellBook[i] == NULL)
		{
			this->_spellBook[i] = m;
			std::cout << "Materia " << m->getType() << "written in spells book " << i << std::endl;
			return;
		}
	}
	std::cout << "Materia can't be learn, spells book is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_spellBook[i] != NULL && type == this->_spellBook[i]->getType())
		{
			return(this->_spellBook[i]->clone());
		}
	}
	std::cout << "Unknow Materia Type" << std::endl;
	return (0);
}