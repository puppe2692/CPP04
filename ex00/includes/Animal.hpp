/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:41:00 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:41:44 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	public:

		Animal(void);
		Animal(std::string type);
		Animal(Animal& other);
		~Animal(void);

		Animal& operator=(Animal& other);
		std::string getType(void) const;

		virtual void makeSound(void) const;
		
	protected:

		std::string _type;
};

#endif