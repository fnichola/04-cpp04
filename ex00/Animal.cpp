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

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	type = rhs.type;
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
