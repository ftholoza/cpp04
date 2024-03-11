/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:51:13 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/11 19:59:37 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	std::cout << "Character: default constructor" << std::endl;
	this->_name = "none";
	this->i = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}
	
Character::Character(std::string name)
{
	std::cout << "Character: constructor" << std::endl;
	this->_name = name;
	this->i = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character(Character &to_copy)
{
	std::cout << "Character: copy constructor" << std::endl;
	*this = to_copy;
	return ;
}

Character &Character::operator=(Character &to_copy)
{
	std::cout << "Character: operator=" << std::endl;
	if (this != &to_copy)
	{
		this->i = to_copy.i;
		for(int i = 0; i < 4; i++)
			this->inventory[i] = to_copy.inventory[i];
		this->_name = to_copy._name;
	}
	return (*this);
}
		
Character::~Character()
{
	std::cout << "Character: destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	return ;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int i = 0;
	
	if (m == NULL)
	{
		std::cout << "Character: ERROR" << std::endl;
		return ;
	}
	while(i < 4 && this->inventory[i] != NULL)
	{
		if (this->inventory[i] == m)
		{
			std::cout << "Character: already equiped" << std::endl;
			return ;
		}
		i++;
	}
	if (i == 4)
	{
		std::cout << "Character: " << this->_name << ": inventory is full" << std::endl;
		return ;
	}
	std::cout << "Character: " << this->_name << ": equiped: " << m->getType() << std::endl;
	this->inventory[i] = m;
	return ;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "Character: " << this->_name << ": unequip: ERROR" << std::endl;
		return ;
	}
	if (this->inventory[idx] == NULL)
	{
		std::cout << "Character: " << this->_name << ": slot empty" << std::endl;
	}
	std::cout << "Character: " << this->_name << ": unequip:" << this->inventory[idx]->getType() << std::endl;
	this->inventory[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "Character: " << this->_name << ": use: ERROR" << std::endl;
		return ;
	} 
	if (this->inventory[idx] == NULL)
	{
		std::cout << "Character: this slot is empty" << std::endl;
		return ;
	}
	this->inventory[idx]->use(target);
	return ;
}
