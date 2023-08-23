/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:51:48 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:52:40 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal& other);
		~WrongAnimal(void);

		WrongAnimal& operator=(WrongAnimal& other);
		std::string getType(void) const;

		void makeSound(void) const;
		
	protected:

		std::string _type;
};

#endif