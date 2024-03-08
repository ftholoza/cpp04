/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:36:23 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/08 18:49:06 by ftholoza         ###   ########.fr       */
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
	delete j;//should not create a leak
	delete i;

	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;31m            MY TESTS\033[0m" << std::endl;
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl << std::endl;
	Animal *savana[10];
	std::cout << "\033[1;35mDOGS CREATION:\033[0m" << std::endl << std::endl;
	for (int i = 0; i < 5; i++)
		savana[i] = new Dog();
	std::cout << std::endl << "\033[1;35mCATS CREATION:\033[0m" << std::endl << std::endl;
	for (int i = 5; i < 10; i++)
		savana[i] = new Cat();
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;31m          BRAIN TESTS\033[0m" << std::endl;
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl << std::endl;
	
	std::cout << std::endl << "\033[1;35mCHECK WORKING BRAINS\033[0m" << std::endl << std::endl;
	std::cout << "\033[1;36mLIST[0]\033[0m" << savana[0]->getBrain()->getIdeas(0) << std::endl;
	std::cout << "\033[1;36mLIST[5]\033[0m" << savana[5]->getBrain()->getIdeas(0) << std::endl;
	std::cout << "\033[1;36mLIST[6]\033[0m" << savana[6]->getBrain()->getIdeas(0) << std::endl;
	std::cout << "\033[1;36mLIST[4]\033[0m" << savana[4]->getBrain()->getIdeas(0) << std::endl << std::endl;

	std::cout << "\033[1;36mIDEA[0]\033[0m" << savana[0]->getBrain()->getIdeas(0) << std::endl;
	std::cout << "\033[1;36mIDEA[1]\033[0m" << savana[0]->getBrain()->getIdeas(1) << std::endl;
	std::cout << "\033[1;36mIDEA[2]\033[0m" << savana[0]->getBrain()->getIdeas(2) << std::endl << std::endl;
	std::cout << "\033[1;36mIDEA[0]\033[0m" << savana[5]->getBrain()->getIdeas(0) << std::endl;
	std::cout << "\033[1;36mIDEA[1]\033[0m" << savana[5]->getBrain()->getIdeas(1) << std::endl;
	std::cout << "\033[1;36mIDEA[2]\033[0m" << savana[5]->getBrain()->getIdeas(2) << std::endl << std::endl;

	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;31m         DEEP COPY TESTS\033[0m" << std::endl;
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	Animal *a = new Dog();
	Animal *b = new Cat();
	a->getBrain()->setIdeas("ba ba baoooo", 0);
	b->getBrain()->setIdeas("mi mi mi mi mi mi miaooooo", 0);
	Animal c = *a;
	a->getBrain()->setIdeas("babao", 0);
	std::cout << c.getType() << std::endl;
	std::cout << c.getBrain()->getIdeas(0) << std::endl;
	std::cout << a->getBrain()->getIdeas(0) << std::endl;
	c = *b;
	b->getBrain()->setIdeas("miaaaaaaaaaao", 0);
	std::cout << c.getType() << std::endl;
	std::cout << c.getBrain()->getIdeas(0) << std::endl;
	
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;31m         DESTRUCTION\033[0m" << std::endl;
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
		delete savana[i];
	delete a;
	delete b;
	delete c.getBrain();
}