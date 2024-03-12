/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:05:15 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/12 00:20:31 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource: default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		stock[i] = NULL;
	return ;
}
	
MateriaSource::MateriaSource(MateriaSource &to_copy)
{
	std::cout << "MateriaSource: copy constructor" << std::endl;
	*this = to_copy;
	return ;
}
		
MateriaSource& MateriaSource::operator=(MateriaSource &to_copy)
{
	std::cout << "MateriaSource: operator=" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (this->stock[i] != NULL)
			delete this->stock[i];
	}
	if (this != &to_copy)
	{
		for(int i = 0; i < 4; i++)
		{
			if (to_copy.stock[i] != NULL)
				this->stock[i] = to_copy.stock[i]->clone();
		}
	}
	return (*this);
}
		
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource: destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] != NULL)
			delete this->stock[i];
	}
	return ;
}
		
void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	
	if (m == NULL)
	{
		std::cout << "MateriaSource: ERROR" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] == m)
		{
			std::cout << "MateriaSource: aleready learned" << std::endl;
			return ;
		}		
	}
	while(i < 4 && this->stock[i] != NULL)
		i++;
	if (i >= 4)
	{
		std::cout << "MateriaSource: stock is full" << std::endl;
		return ;
	}
	std::cout << "MateriaSource: learn: " << m->getType() << std::endl;
	this->stock[i] = m;
	return ;
}
		
AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] != NULL && this->stock[i]->getType() == type)
			return (this->stock[i]->clone());
	}
	std::cout << "MateriaSource: type: " << type << ": not learned" << std::endl;
	return NULL;
}

void MateriaSource::display()
{
	std::cout << std::endl <<"\033[1;33m-----------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;33m|           MATERIASOURCE         |\033[0m" << std::endl;
	std::cout << "\033[1;33m-----------------------------------\033[0m" << std::endl;
	std::cout << "STOCK:" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] != NULL)
			std::cout << i << ": " << this->stock[i]->getType() << ": [" << this->stock[i] << "]" << std::endl;
	}
}