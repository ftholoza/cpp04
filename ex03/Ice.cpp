/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:53:23 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/11 17:43:33 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(): AMateria()
{
	std::cout << "Ice: default constructor" << std::endl;
	this->_type = "ice";
	return ;
}

Ice::~Ice()
{
	std::cout << "Ice: destructor" << std::endl;
	return ;	
}

Ice::Ice(Ice &to_copy): AMateria(to_copy)
{
	std::cout << "Ice: copy constructor" << std::endl;
	*this = to_copy;
	return ;
}

AMateria *Ice::clone() const
{
	std::cout << "Ice: cloning" << std::endl;
	AMateria *res = new Ice();
	return (res);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}