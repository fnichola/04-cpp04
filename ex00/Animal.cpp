/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:56:57 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 02:40:30 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "debugPrint.hpp"

Animal::Animal()
{
	debugPrint("Animal default constructor called", BLU);
}

Animal::Animal(const Animal& src)
{
	debugPrint("Animal copy constructor called", BLU);
	*this = src;
}

Animal::~Animal()
{
	debugPrint("Animal destructor called", BLU);
}

Animal& Animal::operator=(const Animal& rhs)
{
	debugPrint("Animal copy assignment operator called", BLU);
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return *this;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "(Mysterious animal noises)" << std::endl;
}
