/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/26 07:29:21 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "debugPrint.hpp"

int main()
{
	{
	debugPrint("const Animal* meta = new Animal();");
	const Animal* meta = new Animal();
	debugPrint("const Animal* c = new Cat();");
	const Animal* c = new Cat();
	debugPrint("const Animal* d = new Dog();");
	const Animal* d = new Dog();

	debugPrint("getType() and makeSound()...");
	std::cout << c->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;
	c->makeSound();
	d->makeSound();
	meta->makeSound();

	debugPrint("delete...");
	delete meta;
	delete c;
	delete d;
	}

	std::cout << "\n------------------------------------------\n" << std::endl;

	{
	debugPrint("const WrongAnimal* wMeta = new WrongAnimal();");
	const WrongAnimal* wMeta = new WrongAnimal();
	debugPrint("const WrongAnimal* wc = new WrongCat();");
	const WrongAnimal* wc = new WrongCat();

	debugPrint("getType() and makeSound()...");
	std::cout << wc->getType() << " " << std::endl;
	wc->makeSound();
	wMeta->makeSound();

	debugPrint("delete...");
	delete wMeta;
	delete wc;
	}

	std::cout << "\n------------------------------------------\n" << std::endl;

	{
	debugPrint("const Animal c = new Cat();");
	const Animal* c = new Cat();
	debugPrint("const Animal a2 = *c;");
	const Animal a2 = *c;
	debugPrint("const Cat c3;");
	Cat c3;
	debugPrint("Cat c4(c3);");
	Cat c4(c3);

	debugPrint("Cat c5;");
	Cat c5;
	debugPrint("c5 = c3;");
	c5 = c3;

	debugPrint("c->getType()");
	std::cout << c->getType() << " " << std::endl;
	debugPrint("a2->getType()");
	std::cout << a2.getType() << " " << std::endl;
	debugPrint("c3->getType()");
	std::cout << c3.getType() << " " << std::endl;
	debugPrint("c->makeSound();");
	c->makeSound();
	debugPrint("a2.makeSound(); // Copying from an Animal* pointer, causes 'slicing'");
	a2.makeSound(); // Copying from an Animal* pointer, causes 'slicing'
	debugPrint("c3.makeSound();");
	c3.makeSound();

	debugPrint("delete...");
	delete c;
	}

	return 0;
}
