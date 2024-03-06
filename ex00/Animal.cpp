/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:15:43 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/06 20:12:33 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: constructor called" << std::endl; 
	this->type = "none";
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal: destructor called" << std::endl;
	return ;
}

Animal::Animal(Animal &to_copy)
{
	std::cout << "Animal: copy constructor called" << std::endl;
	*this = to_copy;
	return ;	
}

Animal& Animal::operator=(Animal const &to_copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
        if (this != &to_copy)
			this->type = to_copy.type;
        return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sounds" << std::endl;
}