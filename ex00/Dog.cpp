/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:56:25 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/09 02:36:32 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "debugPrint.hpp"

Dog::Dog()
	: Animal()
{
	debugPrint("Dog default constructor called", BLU);
	type = "Dog";
}

Dog::Dog(const Dog& src)
	: Animal(src)
{
	debugPrint("Dog copy constructor called", BLU);
}

Dog::~Dog()
{
	debugPrint("Dog destructor called", BLU);
}

Dog& Dog::operator=(const Dog& rhs)
{
	debugPrint("Dog copy assignment operator called", BLU);
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return *this;
}

std::string Dog::getType() const
{
	return type;
}

void Dog::makeSound() const
{
	std::cout << "WOOF WOOF!" << std::endl;
}
