/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:38:43 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/24 15:01:38 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

AMateria* floor[100] = {NULL};

Character::Character(void) : _name("unamed")
{
	std::cout << GREEN << "Character Default Constructor call" << RESET << std::endl;
	for (int i = 0; i < this->_inventorySize; i++)
		this->_inventory[i] = NULL;
	return;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << GREEN << "Character Parameter Constructor call" << RESET << std::endl;
	for (int i = 0; i < this->_inventorySize; i++)
		this->_inventory[i] = NULL;
	return;
}

Character::Character(Character& other)
{
	std::cout << GREEN << "Character Copy Constructor call" << RESET << std::endl;
	*this = other;
	return;
}

Character::~Character(void)
{
	std::cout << GREEN << "Character Destructor call" << RESET << std::endl;
	for (int i = 0; i < this->_inventorySize; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	return;
}

Character& Character::operator=(Character& other)
{
	std::cout << "Character operator = call" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		for (int i = 0; i < this->_inventorySize; i++)
		{
			if (this->_inventory[i])
			{
				delete this->_inventory[i];
			}
			this->_inventory[i] = other._inventory[i]->clone(); // pourquoi la on a pas besoin de Getinventory?
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < this->_inventorySize; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "Materia " << m->getType() << "equiped on slot " << i << std::endl;
			return;
		}
	}
	std::cout << "Materia can't be equiped, inventory is full" << std::endl;

}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 3)
	{
		for (int i = 0; i < 99; i++)
		{
			if (floor[i] == NULL)
			{
				floor[i] = this->_inventory[idx];
				this->_inventory[idx] = NULL; // ici
				return;
			}
		}
		std::cout << "the floor is full of meteria" << std::endl;
	}
	std::cout << "Choose a valid slot" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->_inventorySize)
	{
		this->_inventory[idx]->use(target);
	}
	std::cout << "do nothing" << std::endl;
}