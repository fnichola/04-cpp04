/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 04:54:47 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 04:54:47 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& src);
	~WrongCat();
	WrongCat& operator=(const WrongCat& rhs);

	std::string getType() const;
	void makeSound() const;
};

#endif
