/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:38:43 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/23 17:26:55 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

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
		this->_name = other._name;
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