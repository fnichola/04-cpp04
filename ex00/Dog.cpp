/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:56:25 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/26 07:29:46 by fnichola         ###   ########.fr       */
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
	Animal::operator=(rhs);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "WOOF WOOF!" << std::endl;
}
