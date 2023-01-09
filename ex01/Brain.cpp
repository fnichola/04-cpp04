/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:56:57 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/08 09:43:21 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "debugPrint.hpp"

Brain::Brain()
{
	debugPrint("Brain default constructor called", BLU);
}

Brain::Brain(const Brain& src)
{
	debugPrint("Brain copy constructor called", BLU);
	*this = src;
}

Brain::~Brain()
{
	debugPrint("Brain destructor called", BLU);
}

Brain& Brain::operator=(const Brain& rhs)
{
	debugPrint("Brain copy assignment operator called", BLU);
	if (this != &rhs)
	{
		for (int i = 0; i < numberOfIdeas; ++i)
		{
			ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

void Brain::addIdea(const std::string& idea)
{
	int i = 0;
	while (i < numberOfIdeas && !ideas[i].empty())
		++i;
	if (i < numberOfIdeas)
		ideas[i] = idea;
	else
		std::cerr << "This brain is full!" << std::endl;
}

const std::string& Brain::getIdea(const int index) const
{
	if (index < 0)
	{
		std::cerr << "Warning: Tried to access Brain out of range" << std::endl;
		return ideas[0];
	}
	else if (index > numberOfIdeas)
	{
		std::cerr << "Warning: Tried to access Brain out of range" << std::endl;
		return ideas[numberOfIdeas - 1];
	}
	else 
	{
		return ideas[index];
	}
}

void Brain::setIdea(const int index, const std::string& idea)
{
	if (index >= 0 && index < numberOfIdeas)
		ideas[index] = idea;
	else
		std::cerr << "Brain access out of range" << std::endl;
}
