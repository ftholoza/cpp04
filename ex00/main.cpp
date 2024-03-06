/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:36:23 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/06 20:55:54 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

/*int	main(void)
{
	std::cout << "Constructors" << std::endl;
	Animal	a;
	Dog		b;
	Cat		c;
	
	std::cout << "Check of types:" << std::endl;
	std::cout << "Animal type: " << a.get_type() << std::endl;
	std::cout << "Dog type: " << b.get_type() << std::endl;
	std::cout << "Cat type: " << c.get_type() << std::endl;
	std::cout << "Make sound tests: " << std::endl;
	b.makeSound();
	c.makeSound();
	std::cout << "Destructors" << std::endl;
}*/

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	
	delete meta;
	delete j;
	delete i;
}