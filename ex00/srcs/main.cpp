/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:02:26 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 12:06:04 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongi = new WrongCat();
	std::cout << wrongi->getType() << " " << std::endl;
	wrongi->makeSound(); //will  not output the cat sound!
	wrongmeta->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wrongmeta;
	delete wrongi;

	Animal* Animals[3] = {new Animal("bete"), new Cat("Cat"), new Dog("Dog")};
	size_t	k = 0;

	while (k < 3)
	{
		Animals[k]->makeSound();
		k++;
	}

	while ( k > 0)
	{
		delete Animals[k - 1];
		k--;
	}

	return (0);
}