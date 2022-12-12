/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/12 02:41:47 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "debugPrint.hpp"

int main()
{
	// AAnimal a; // error: cannot declare variable ‘a’ to be of abstract type ‘AAnimal’
	// const AAnimal* a = new AAnimal(); // error: invalid new-expression of abstract class type ‘AAnimal’
	
	debugPrint("\n---- Basic Test, addIdea and getIdea ----\n"); 

	{
	const AAnimal* c = new Cat();
	const AAnimal* d = new Dog();

	c->getBrain()->addIdea("I want to eat birds.");
	std::cout << c->getBrain()->getIdea(0) << std::endl;

	d->getBrain()->addIdea("I want to chase cats.");
	std::cout << d->getBrain()->getIdea(0) << std::endl;

	delete c;
	delete d;
	}

	debugPrint("\n---- Deep Copy (Cat) ----\n");

	{
	const Cat* c = new Cat();

	c->getBrain()->addIdea("I want to eat mice.");
	std::cout << c->getBrain()->getIdea(0) << std::endl;

	const Cat* c2 = new Cat(*c);
	std::cout << c2->getBrain()->getIdea(0) << std::endl;
	c2->getBrain()->setIdea(0, "Feathers are the best.");
	std::cout << c->getBrain()->getIdea(0) << std::endl;
	std::cout << c2->getBrain()->getIdea(0) << std::endl;

	delete c;
	delete c2;
	}

	debugPrint("\n---- Deep Copy (Dog) ----\n");

	{
	const Dog* d = new Dog();

	d->getBrain()->addIdea("I'm hungry");
	std::cout << d->getBrain()->getIdea(0) << std::endl;

	const Dog* d2 = new Dog(*d);
	std::cout << d2->getBrain()->getIdea(0) << std::endl;
	d2->getBrain()->setIdea(0, "Squirrel?!");
	std::cout << d->getBrain()->getIdea(0) << std::endl;
	std::cout << d2->getBrain()->getIdea(0) << std::endl;

	delete d;
	delete d2;
	}

	return 0;
}
