/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:56:57 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 02:40:30 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "debugPrint.hpp"

AAnimal::AAnimal()
{
	debugPrint("AAnimal default constructor called", BLU);
	brain = NULL;
	type = "Generic AAnimal (TM)";
}

AAnimal::AAnimal(const AAnimal& src)
	: brain(NULL)
{
	debugPrint("AAnimal copy constructor called", BLU);
	*this = src;
}

AAnimal::~AAnimal()
{
	debugPrint("AAnimal destructor called", BLU);
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
	debugPrint("AAnimal copy assignment operator called", BLU);
	if (this != &rhs)
	{
		if (brain)
			delete brain;
		brain = new Brain(*rhs.brain);
		type = rhs.type;
	}
	return *this;
}

Brain* AAnimal::getBrain() const
{
	return brain;
}
