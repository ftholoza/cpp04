/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:15:43 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/06 20:46:34 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: constructor called" << std::endl; 
	this->type = "none";
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: destructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal &to_copy)
{
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	*this = to_copy;
	return ;	
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &to_copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
        if (this != &to_copy)
			this->type = to_copy.type;
        return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sounds" << std::endl;
}