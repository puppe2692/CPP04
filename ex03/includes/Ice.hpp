/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:59:29 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/23 17:30:25 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice(void);
		Ice(Ice& other);
		~Ice(void);

		Ice& operator=(Ice& other);
		void use(ICharacter& target);
		AMateria* clone() const;
		
};

#endif