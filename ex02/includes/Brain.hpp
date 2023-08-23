/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:22:32 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 14:53:23 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
#include "../includes/Animal.hpp"

class Brain
{
	public :
		Brain(void);
		Brain(std::string idea);
		Brain(Brain& other);
		~Brain(void);

		Brain& operator=(Brain& other);
		std::string getIdea(size_t n);
		void setIdea(std::string idea, size_t n);

	private :
		std::string _ideas[100];
};

#endif