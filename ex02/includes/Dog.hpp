/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:47:52 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 16:01:23 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
	
		Dog(void);
		Dog(std::string type);
		Dog(Dog& type);
		~Dog(void);

		Dog& operator=(Dog& other);
		std::string getType(void) const;
		std::string getIdea(size_t n);
		Brain* getBrain(void);
		void setIdea(std::string idea, size_t n);

		void makeSound(void) const;
		
	private:

		Brain*	_Cerveau;
	
};

#endif