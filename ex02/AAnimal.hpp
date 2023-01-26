/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:51:58 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/26 08:45:05 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>

class Brain;

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal& src);
	virtual ~AAnimal();
	AAnimal& operator=(const AAnimal& rhs);

	std::string getType() const;
	virtual void makeSound() const = 0;
	virtual Brain* getBrain() const = 0;

protected:
	std::string type;
};

#endif
