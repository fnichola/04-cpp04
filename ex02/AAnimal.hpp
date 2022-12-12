/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:51:58 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/12 02:01:44 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal
{
public:
	virtual ~AAnimal() = 0;
	AAnimal& operator=(const AAnimal& rhs);

	virtual std::string getType() const = 0;
	virtual void makeSound() const = 0;
	Brain* getBrain() const;

protected:
	std::string type;
	Brain* brain;
};

#endif
