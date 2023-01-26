/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:51:58 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/26 08:04:42 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain& src);
	~Brain();
	Brain& operator=(const Brain& rhs);

	void addIdea(const std::string& idea);
	const std::string getIdea(const int index) const;
	void setIdea(const int index, const std::string& idea);

protected:
	static const int numberOfIdeas = 100;
	std::string ideas[numberOfIdeas];
};

#endif
