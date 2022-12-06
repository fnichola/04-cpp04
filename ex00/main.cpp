/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 04:58:54 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* c = new Cat();
	const Animal* d = new Dog();

	std::cout << c->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;
	c->makeSound();
	d->makeSound();
	meta->makeSound();

	delete meta;
	delete c;
	delete d;

	std::cout << "\n------------------------------------------\n" << std::endl;

	const WrongAnimal* wMeta = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << wc->getType() << " " << std::endl;
	wc->makeSound();
	wMeta->makeSound();

	delete wMeta;
	delete wc;
	return 0;
}
