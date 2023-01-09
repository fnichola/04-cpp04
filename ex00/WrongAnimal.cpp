/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:56:57 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 02:40:30 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "debugPrint.hpp"

WrongAnimal::WrongAnimal()
{
	debugPrint("WrongAnimal default constructor called", BLU);
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	debugPrint("WrongAnimal copy constructor called", BLU);
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	debugPrint("WrongAnimal destructor called", BLU);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	debugPrint("WrongAnimal copy assignment operator called", BLU);
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return *this;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "(Mysterious animal noises)" << std::endl;
}
