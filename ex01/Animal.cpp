/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:15:43 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/08 19:05:17 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "none";
	std::cout << "\033[1;34mDEFAULT ANIMAL CONSTRUCTOR: \033[0m" << std::endl; 
	this->_brain = NULL;
	return ;
}

Animal::~Animal()
{
	std::cout << "\033[1;31mANIMAL DESTRUCTOR: \033[0m" << std::endl;
	return ;
}

Animal::Animal(Animal &to_copy)
{
	this->type = to_copy.type;
	std::cout << "\033[1;32mCOPY ANIMAL CONSTRUCTOR: \033[0m" << this->type << std::endl;
	this->_brain = new Brain(*to_copy._brain);
}

Animal& Animal::operator=(Animal &to_copy)
{
	std::cout << "\033[1;32mCOPY ASSIGNEMENT OPERATOR: \033[0m" << this->type << std::endl;
	this->type = to_copy.type;
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain(*(to_copy.getBrain()));
    return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}

Brain *Animal::getBrain()
{
	return this->_brain;	
}

void	Animal::makeSound() const
{
	std::cout << "Animal: Animal sounds..." << std::endl;
}