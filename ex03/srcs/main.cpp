/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:46:27 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/25 12:23:58 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

static void	testSubject(void)
{
	std::cout << "--------SUBJECT TEST--------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

static void	testCharacter(void)
{
	std::cout << "--------CHARACTER TEST--------" << std::endl;
	ICharacter	*hero = new Character("ShinyRobert");
	ICharacter	*enemy = new Character("DarkDidier");
	AMateria	*ice = new Ice();

	hero->equip(new Ice());
	hero->equip(ice);
	hero->equip(new Cure());
	hero->equip(new Ice());
	hero->equip(new Ice());
	enemy->equip(new Cure());
	enemy->equip(new Cure());
	enemy->equip(new Cure());

	hero->printInventory();
	enemy->printInventory();

	hero->use(0, *enemy);
	hero->use(1, *enemy);
	hero->use(3, *enemy);
	enemy->use(2, *hero);

	hero->unequip(1);
	hero->printInventory();
	hero->use(1, *enemy);

	hero->equip(new Cure());
	hero->printInventory();
	hero->use(1, *enemy);

	delete hero;
	delete enemy;
	delete ice;
}

static void	testMateriaSource()
{
	std::cout << "--------MATERIASOURCE TEST--------" << std::endl;
	IMateriaSource	*matSource = new MateriaSource();
	ICharacter		*hero = new Character("ShinyRobert");
	ICharacter		*enemy = new Character("DarkDidier");
	
	matSource->learnMateria(new Ice());
	matSource->learnMateria(new Cure());
	matSource->learnMateria(new Cure());
	matSource->learnMateria(new Cure());
	matSource->learnMateria(new Cure());

	hero->printInventory();
	hero->equip(matSource->createMateria("ice"));
	hero->equip(matSource->createMateria("cure"));
	hero->equip(matSource->createMateria("cure"));
	hero->equip(matSource->createMateria("ice"));
	hero->printInventory();
	hero->equip(matSource->createMateria("cure"));
	hero->printInventory();

	hero->use(0, *enemy);
	hero->use(2, *enemy);

	delete matSource;
	delete hero;
	delete enemy;
}


int main(void)
{
	testSubject();
	testCharacter();
	testMateriaSource();
	return 0;
}