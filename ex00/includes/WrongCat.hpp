/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:55:26 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:56:33 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(WrongCat& type);
		~WrongCat(void);

		WrongCat& operator=(WrongCat& other);
		std::string getType(void) const;

		void makeSound(void) const;
		
	private:
	
};
#endif