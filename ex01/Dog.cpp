/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:56:25 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/26 08:30:45 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "debugPrint.hpp"

Dog::Dog()
	: Animal()
{
	debugPrint("Dog default constructor called", BLU);
	m_brain = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog& src)
	: Animal(src)
{
	debugPrint("Dog copy constructor called", BLU);
	m_brain = new Brain();
}

Dog::~Dog()
{
	debugPrint("Dog destructor called", BLU);
	delete m_brain;
}

Dog& Dog::operator=(const Dog& rhs)
{
	debugPrint("Dog copy assignment operator called", BLU);
	Animal::operator=(rhs);
	*m_brain = *rhs.m_brain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "WOOF WOOF!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return m_brain;
}
