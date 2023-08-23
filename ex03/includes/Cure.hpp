/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:01:58 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/23 17:11:40 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure(void);
		Cure(Cure& other);
		~Cure(void);

		Cure& operator=(Cure& other);
		void use(ICharacter& target);
		AMateria* clone() const;

};

#endif