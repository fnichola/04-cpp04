/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:56:25 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/08 09:45:48 by fnichola         ###   ########.fr       */
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
}

Cat::~Cat()
{
	debugPrint("Cat destructor called", BLU);
	delete brain;
}

Cat& Cat::operator=(const Cat& rhs)
{
	debugPrint("Cat copy assignment operator called", BLU);
	Animal::operator=(rhs);
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
