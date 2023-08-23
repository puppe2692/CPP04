/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:02:26 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/22 15:22:50 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{

	std::cout << "----------Test sound & Delete-----------" << std::endl;

	Animal* Animals[4] = {new Dog("Bob"), new Dog("Youki"), new Cat("Jeff"), new Cat("Wiskas")};
	size_t k = 0;

	while (k < 4)
	{
		Animals[k]->makeSound();
		k++;
	}

	while ( k > 0)
	{
		delete Animals[k - 1];
		k--;
	}

	std::cout << "----------Test copy & switch idea-----------" << std::endl;

	Dog dog1("Philibert");

	dog1.setIdea("Croquette", 0);
	std::cout << "Philibert idea: " << dog1.getIdea(0) << std::endl;
	Dog dog2(dog1);
	std::cout << "Philibert idea: " << dog1.getIdea(0) << std::endl;
	std::cout << " Copy idea: " << dog2.getIdea(0) << std::endl;
	dog2.setIdea("os", 0);
	std::cout << "Philibert idea: " << dog1.getIdea(0) << std::endl;
	std::cout << " Copy idea: " << dog2.getIdea(0) << std::endl;

	return (0);
}
