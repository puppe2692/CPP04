/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:47:50 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:17:05 by nwyseur          ###   ########.fr       */
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
	
		Cat(std::string type);
		Cat(Cat& type);
		~Cat(void);

		Cat& operator=(Cat& other);
		std::string gettype(void);

		void makeSound(void) override;
		
	private:
	
		Cat(void);
};
#endif