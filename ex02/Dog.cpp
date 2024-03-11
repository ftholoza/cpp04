/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:32:32 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/11 10:54:01 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog(): Animal()
{
	std::cout << "\033[1;32mDEFAULT DOG CONSTRUCTOR: \033[0m" << std::endl; 
	this->type = "Dog";
	this->_brain = new Brain();
	this->_brain->setIdeas("bark cat", 0);
	this->_brain->setIdeas("bark food", 1);
	this->_brain->setIdeas("bark ZzZ", 2);
	return ;
}

Dog::~Dog()
{
	std::cout << "\033[1;31mDOG DESTRUCTOR: \033[0m" << std::endl;
	delete this->_brain;
	return ;
}

Dog::Dog(Dog &to_copy): Animal(to_copy)
{
	std::cout << "Dog: copy constructor called" << std::endl;
	this->_brain = new Brain(*(to_copy.getBrain()));
	return ;
}

void	Dog::makeSound()
{
	std::cout << "Dog: Ba-Ba-Baou" << std::endl;
	return ;
}

Dog& Dog::operator=(Dog &to_copy)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	delete this->_brain;
	this->_brain = new Brain(*(to_copy.getBrain()));
    return (*this);
}

Brain *Dog::getBrain()
{
	return this->_brain;
}

void	Dog::setIdea(std::string idea, int i)
{
	this->getBrain()->setIdeas(idea, i);
	return ;
}

void	Dog::displayIdeas()
{
	for (int i = 0; i < 100; i++)
	if (!this->getBrain()->getIdeas(i).empty())
		std::cout << this->getBrain()->getIdeas(i) << std::endl;
}