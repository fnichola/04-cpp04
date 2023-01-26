/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:56:25 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/26 08:30:30 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "debugPrint.hpp"

Cat::Cat()
	: Animal()
{
	debugPrint("Cat default constructor called", BLU);
	m_brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat& src)
	: Animal(src)
{
	debugPrint("Cat copy constructor called", BLU);
	m_brain = new Brain();
}

Cat::~Cat()
{
	debugPrint("Cat destructor called", BLU);
	delete m_brain;
}

Cat& Cat::operator=(const Cat& rhs)
{
	debugPrint("Cat copy assignment operator called", BLU);
	Animal::operator=(rhs);
	*m_brain = *rhs.m_brain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return m_brain;
}
