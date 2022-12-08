/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:51:58 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/08 05:58:44 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
	Animal();
	Animal(const Animal& src);
	virtual ~Animal();
	Animal& operator=(const Animal& rhs);

	virtual std::string getType() const;
	virtual void makeSound() const;
	Brain* getBrain() const;

protected:
	std::string type;
	Brain* brain;
};

#endif
