/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:41:00 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 16:24:43 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#define RED "\e[0;31m"
#define RESET "\e[0m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"

# include <string>
# include <iostream>

class Animal
{
	public:

		Animal(void);
		Animal(std::string type);
		Animal(Animal& other);
		virtual ~Animal(void);

		Animal& operator=(Animal& other);
		std::string getType(void) const;

		virtual void makeSound(void) const = 0;
		
	protected:

		std::string _type;
};

#endif