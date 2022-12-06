/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:56:25 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 04:44:12 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& src)
	: Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	type = rhs.type;
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
