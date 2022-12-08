/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:56:25 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/08 06:33:56 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "debugPrint.hpp"

Cat::Cat()
	: Animal()
{
	debugPrint("Cat default constructor called", BLU);
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat& src)
	: Animal(src)
{
	debugPrint("Cat copy constructor called", BLU);
	*this = src;
}

Cat::~Cat()
{
	debugPrint("Cat destructor called", BLU);
	delete brain;
}

Cat& Cat::operator=(const Cat& rhs)
{
	debugPrint("Cat copy assignment operator called", BLU);
	type = rhs.type;
	brain = new Brain(*rhs.brain);
	return *this;
}

std::string Cat::getType() const
{
	return type;
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW!" << std::endl;
}
