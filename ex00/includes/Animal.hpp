/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:41:00 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:16:31 by nwyseur          ###   ########.fr       */
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
		std::string gettype(void);

		virtual void makeSound(void);
		
	protected:

		std::string _type;
};

#endif