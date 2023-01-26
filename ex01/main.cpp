/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/26 08:21:05 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "debugPrint.hpp"

int main()
{
	debugPrint("\n---- Basic Test, addIdea and getIdea ----\n"); 

	{
	const Animal* c = new Cat();
	const Animal* d = new Dog();

	c->getBrain()->addIdea("I want to eat birds.");
	c->getBrain()->addIdea("Don't touch me, filthy human!");
	c->makeSound();
	std::cout << c->getBrain()->getIdea(0) << std::endl;
	std::cout << c->getBrain()->getIdea(1) << std::endl;

	d->getBrain()->addIdea("I want to chase cats.");
	d->getBrain()->addIdea("Ball?!");
	d->makeSound();
	std::cout << d->getBrain()->getIdea(0) << std::endl;
	std::cout << d->getBrain()->getIdea(1) << std::endl;


	delete c;
	delete d;
	}

	debugPrint("\n---- Deep Copy (Cat) ----\n");

	{
	const Cat* c = new Cat();

	c->getBrain()->addIdea("I want to eat mice.");
	std::cout << c->getBrain()->getIdea(0) << std::endl;

	Cat c2;
	c2 = *c;
	std::cout << c2.getBrain()->getIdea(0) << std::endl;
	c2.getBrain()->setIdea(0, "Feathers are the best.");
	std::cout << c->getBrain()->getIdea(0) << std::endl;
	std::cout << c2.getBrain()->getIdea(0) << std::endl;

	delete c;
	}

	debugPrint("\n---- Deep Copy (Dog) ----\n");

	{
	const Dog* d = new Dog();

	d->getBrain()->addIdea("I'm hungry");
	std::cout << d->getBrain()->getIdea(0) << std::endl;

	Dog d2;
	d2 = *d;
	std::cout << d2.getBrain()->getIdea(0) << std::endl;
	d2.getBrain()->setIdea(0, "Squirrel?!");
	std::cout << d->getBrain()->getIdea(0) << std::endl;
	std::cout << d2.getBrain()->getIdea(0) << std::endl;

	delete d;
	}

	debugPrint("\n---- Do all animals have brains? ----\n");
	{
	const Animal a;

	std::cout << a.getType() << std::endl;
	if (a.getBrain())
	{
		a.getBrain()->addIdea("Do I exist?");
		std::cout << a.getBrain()->getIdea(0);
	}
	else
	{
		std::cout << "If I only had a brain :'(" << std::endl;
	}
	}

	debugPrint("\n---- Array of animals ----\n");
	{
		Animal *array[10];
		array[0] = new Cat;
		array[1] = new Cat;
		array[2] = new Cat;
		array[3] = new Cat;
		array[4] = new Cat;
		array[5] = new Dog;
		array[6] = new Dog;
		array[7] = new Dog;
		array[8] = new Dog;
		array[9] = new Dog;

		for (int i = 0; i < 10; ++i)
		{
			delete array[i];
		}
	}
	return 0;
}
