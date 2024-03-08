/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:25:39 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/06 20:52:26 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat: default constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: destructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat &to_copy): WrongAnimal(to_copy)
{
	std::cout << "WrongCat: copy constructor called" << std::endl;
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat: baoubaou" << std::endl;
	return ;
}