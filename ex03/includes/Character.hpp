/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:49:08 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/23 17:51:25 by nwyseur          ###   ########.fr       */
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

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private :
		std::string _name;
		static const int _inventorySize = 4;
		AMateria* _inventory[_inventorySize];
};

#endif