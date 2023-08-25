/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:38:43 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/25 12:52:39 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

AMateria* Character::sol[100] = {NULL};

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
	std::cout << RED << "Character Destructor call" << RESET << std::endl;
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
			this->_inventory[i] = other._inventory[i]->clone(); 
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
	if (m == NULL)
	{
		return;
	}
	for (int i = 0; i < this->_inventorySize; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "Materia " << m->getType() << " equiped on slot " << i << std::endl;
			return;
		}
	}
	std::cout << "Materia can't be equiped, inventory is full" << std::endl;
	delete m; // ici

}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 3)
	{
		for (int i = 0; i < 99; i++)
		{
			if (sol[i] == NULL)
			{
				sol[i] = this->_inventory[idx];
				std::cout << "Unequiped " << sol[i]->getType() << " Materia" << std::endl;
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
	if (idx >= 0 && idx < this->_inventorySize && this->_inventory[idx] != NULL)
	{
		this->_inventory[idx]->use(target);
		return;
	}
	std::cout << "it does nothing" << std::endl;
}

void	Character::printInventory(void) const
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i])
			std::cout << _inventory[i]->getType() << "|";
		else
			std::cout << "" << "|";
	}
	std::cout << std::endl;
}