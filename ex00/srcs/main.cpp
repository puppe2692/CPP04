/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:02:26 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 11:28:06 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main(void)
{
	Animal* Animals[3] = {new Animal("bete"), new Cat("Cat"), new Dog("Dog")};
	size_t	i = 0;

	while (i < 3)
	{
		Animals[i]->makeSound();
		i++;
	}

	while ( i > 0)
	{
		delete Animals[i - 1];
		i--;
	}
}