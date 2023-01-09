/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:56:25 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/08 10:42:27 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "debugPrint.hpp"

Dog::Dog()
	: AAnimal()
{
	debugPrint("Dog default constructor called", BLU);
	brain = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog& src)
	: AAnimal(src)
{
	debugPrint("Dog copy constructor called", BLU);
	*this = src;
}

Dog::~Dog()
{
	debugPrint("Dog destructor called", BLU);
	delete brain;
}

Dog& Dog::operator=(const Dog& rhs)
{
	debugPrint("Dog copy assignment operator called", BLU);
	AAnimal::operator=(rhs);
	return *this;
}

std::string Dog::getType() const
{
	return type;
}

void Dog::makeSound() const
{
	std::cout << "MEOW MEOW!" << std::endl;
}
