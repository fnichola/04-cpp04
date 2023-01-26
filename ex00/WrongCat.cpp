/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:56:25 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 04:44:12 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "debugPrint.hpp"

WrongCat::WrongCat()
	: WrongAnimal()
{
	debugPrint("WrongCat default constructor called", BLU);
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src)
	: WrongAnimal(src)
{
	debugPrint("WrongCat copy constructor called", BLU);
}

WrongCat::~WrongCat()
{
	debugPrint("WrongCat destructor called", BLU);
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	debugPrint("WrongCat copy assignment operator called", BLU);
	WrongAnimal::operator=(rhs);
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "MEOW MEOW!" << std::endl;
}
