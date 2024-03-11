/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:36:23 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/10 13:10:09 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;31m         SUBJECT TESTS\033[0m" << std::endl;
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	Animal *savana[10];

	std::cout << "\033[1;35mDOGS CREATION:\033[0m" << std::endl << std::endl;
	for (int i = 0; i < 5; i++)
		savana[i] = new Dog();
	std::cout << std::endl << "\033[1;35mCATS CREATION:\033[0m" << std::endl << std::endl;
	for (int i = 5; i < 10; i++)
		savana[i] = new Cat();
	for (int i = 0; i < 10; i++)
	{
		std::cout << "i: " << i << " " << savana[i]->getType() << " : ";
		savana[i]->makeSound();
	} 
	for (int i = 0; i < 10; i++)
		delete savana[i]; 

	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;31m          BRAIN TESTS\033[0m" << std::endl;
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl << std::endl;
	Dog	pluto;
	pluto.setIdea("mickey", 0);
	pluto.setIdea("mouse", 1);
	std::cout << "Pluto ideas: " << std::endl;
	pluto.displayIdeas();
	Dog scooby(pluto);
	pluto.setIdea("im pluto", 3);
	std::cout << "Scooby copied on Pluto ideas:" << std::endl;
	scooby.displayIdeas();
	std::cout << "Pluto at the same moment" << std::endl;
	pluto.displayIdeas();

	Cat	Garfield;
	Garfield.setIdea("lasagne", 0);
	Garfield.setIdea("lasagne", 1);
	std::cout << "Pluto ideas: " << std::endl;
	Garfield.displayIdeas();
	Cat	Pilou(Garfield);
	Garfield.setIdea("im Garfield", 3);
	std::cout << "Pilou copied on Garfield ideas:" << std::endl;
	Pilou.displayIdeas();
	std::cout << "Garfield at the same moment" << std::endl;
	Garfield.displayIdeas();
	

	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;31m         DEEP COPY TESTS\033[0m" << std::endl;
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	Animal *a = new Dog();
	Animal *b = new Cat();
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;31m         DESTRUCTION\033[0m" << std::endl;
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	delete a;
	delete b;
}