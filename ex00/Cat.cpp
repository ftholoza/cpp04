/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:25:39 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/06 20:35:19 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat: default constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" << std::endl;
	return ;
}

Cat::Cat(Cat &to_copy): Animal(to_copy)
{
	std::cout << "Cat: copy constructor called" << std::endl;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Cat: MiaouMiaMiaou" << std::endl;
	return ;
}