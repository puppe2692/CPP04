/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:49:08 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/23 16:12:56 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public :

		Character(void);
		Character(std::string name);
		Character(Character& other);
		~Character(void);

		Character& operator=(Character& other);


	private :
		std::string _name;
		static const int _inventorySize = 4;
		AMateria* _inventory[_inventorySize];
};

#endif