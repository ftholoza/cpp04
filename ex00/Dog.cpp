/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:32:32 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/06 20:19:53 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog: default constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog: destructor called" << std::endl;
	return ;
}

Dog::Dog(Dog &to_copy): Animal(to_copy)
{
	std::cout << "Dog: copy constructor called" << std::endl;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Dog: Ba-Ba-Baou" << std::endl;
	return ;
}