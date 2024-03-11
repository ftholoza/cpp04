/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:15:43 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/11 10:52:41 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "none";
	std::cout << "\033[1;34mDEFAULT ANIMAL CONSTRUCTOR: \033[0m" << std::endl;
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
}

Animal& Animal::operator=(Animal &to_copy)
{
	std::cout << "\033[1;32mCOPY ASSIGNEMENT OPERATOR: \033[0m" << this->type << std::endl;
	this->type = to_copy.type;
    return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound()
{
	std::cout << "Animal: Animal sounds..." << std::endl;
}