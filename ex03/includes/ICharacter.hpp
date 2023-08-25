/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:54:33 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/25 12:19:03 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#define RED "\e[0;31m"
#define RESET "\e[0m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"

# include <string>
# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public :
	
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		virtual void printInventory(void) const = 0;
		
};

#endif