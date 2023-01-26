/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:44:28 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/26 08:45:20 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "debugPrint.hpp"

AAnimal::AAnimal()
{
	debugPrint("AAnimal default constructor called", BLU);
	type = "Generic AAnimal (TM)";
}

AAnimal::AAnimal(const AAnimal& src)
{
	debugPrint("AAnimal copy constructor called", BLU);
	type = "Generic AAnimal (TM)";
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
		type = rhs.type;
	}
	return *this;
}

std::string AAnimal::getType() const
{
	return type;
}
