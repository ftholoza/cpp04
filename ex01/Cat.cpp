/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:25:39 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/10 13:06:50 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "\033[1;35mDEFAULT CAT CONSTRUCTOR: \033[0m" << std::endl; 
	this->type = "Cat";
	this->_brain = new Brain();
	this->_brain->setIdeas("hunt bird", 0);
	this->_brain->setIdeas("play with dead bird", 1);
	this->_brain->setIdeas("Mao ZzZ", 2);
	return ;
}

Cat::~Cat()
{
	std::cout << "\033[1;31mCAT DESTRUCTOR: \033[0m" << std::endl;
	delete this->_brain;
	return ;
}

Cat::Cat(Cat &to_copy): Animal(to_copy)
{
	std::cout << "Cat: copy constructor called" << std::endl;
	this->_brain = new Brain(*(to_copy.getBrain()));
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Cat: MiaouMiaMiaou" << std::endl;
	return ;
}

Cat& Cat::operator=(Cat const &to_copy)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
        if (this->getBrain())
			delete this->_brain;
		this->_brain = new Brain(*(to_copy._brain));
        return (*this);
}

Brain *Cat::getBrain()
{
	return (this->_brain);
}

void	Cat::setIdea(std::string idea, int i)
{
	this->getBrain()->setIdeas(idea, i);
	return ;
}

void	Cat::displayIdeas()
{
	for (int i = 0; i < 100; i++)
	if (!this->getBrain()->getIdeas(i).empty())
		std::cout << this->getBrain()->getIdeas(i) << std::endl;
}