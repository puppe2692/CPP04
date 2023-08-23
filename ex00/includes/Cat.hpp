/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:47:50 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 16:07:45 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
	
		Cat(void);
		Cat(std::string type);
		Cat(Cat& type);
		~Cat(void);

		Cat& operator=(Cat& other);
		std::string getType(void) const;

		void makeSound(void) const;
		
	private:
	
};
#endif