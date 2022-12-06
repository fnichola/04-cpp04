/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:56:25 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 04:45:31 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& src)
	: Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	type = rhs.type;
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
