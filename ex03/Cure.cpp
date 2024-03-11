/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:53:23 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/11 17:42:20 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(): AMateria()
{
	std::cout << "Cure: default constructor" << std::endl;
	this->_type = "cure";
	return ;
}

Cure::~Cure()
{
	std::cout << "Cure: destructor" << std::endl;
	return ;	
}

Cure::Cure(Cure &to_copy): AMateria(to_copy)
{
	std::cout << "Cure: copy constructor" << std::endl;
	*this = to_copy;
	return ;
}

AMateria *Cure::clone() const
{
	std::cout << "Cure: cloning" << std::endl;
	AMateria *res = new Cure();
	return (res);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}