/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:47:52 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 16:07:48 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
	
		Dog(void);
		Dog(std::string type);
		Dog(Dog& type);
		~Dog(void);

		Dog& operator=(Dog& other);
		std::string getType(void) const;

		void makeSound(void) const;
		
	private:
	
};

#endif