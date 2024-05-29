/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:26:23 by ftholoza          #+#    #+#             */
/*   Updated: 2024/05/29 20:31:55 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria: default constructor" << std::endl;
	this->_type = "none";
	return ;
}

AMateria::~AMateria()
{
	std::cout << "AMateria: destructor" << std::endl;
	return ;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria: constructor" << std::endl;
	this->_type = type;
	return ;
}

AMateria::AMateria(AMateria &to_copy)
{
	std::cout << "AMateria: copy constructor" << std::endl;
	*this = to_copy;
	return ;
}

AMateria &AMateria::operator=(AMateria &to_copy)
{
	std::cout << "AMateria: operator=" << std::endl;
	if (this != &to_copy)
		this->_type = to_copy._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

AMateria *AMateria::clone() const
{
	return NULL;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	return ;
}