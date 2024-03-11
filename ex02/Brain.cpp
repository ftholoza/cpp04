/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:09:10 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/08 19:02:30 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "string"
# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[1;33mDEFAULT BRAIN CONSTRUCTOR: \033[0m" << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout << "\033[1;31mBRAIN DESTRUCTOR: \033[0m" << std::endl;
	return ;
}

Brain::Brain(Brain &to_copy)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	*this = to_copy;
	return ;
}

Brain& Brain::operator=(Brain const &to_copy)
{
	int	i;

	i = 0;
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	while (i < 100)
	{
		this->ideas[i] = to_copy.ideas[i];
		i++;
	}
	return (*this);
}

std::string	Brain::getIdeas(int i)
{
	if (i > 100 || i < 0)
		return NULL;
	return this->ideas[i];
}

void	Brain::setIdeas(std::string const idea, int i)
{
	if (i > 100 || i < 0)
		return ;
	this->ideas[i] = idea;
}