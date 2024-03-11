/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:44:05 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/11 20:49:24 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Character.hpp"
# include "ICharacter.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

/*int	main(void)
{
	AMateria	*materia[4];

	materia[0] = new Ice();
	materia[1] = new Cure();
	materia[2] = materia[0]->clone();
	materia[3] = materia[1]->clone();

	for (int i = 0; i < 4; i++)
	{
		std::cout << "type: " << materia[i]->getType() << std::endl;
		std::cout << materia[i] << std::endl;
	}

	ICharacter *a = new Character("bob");
	ICharacter *b = new Character("pablo");
	a->equip(materia[0]);
	a->use(0, *b);
	a->unequip(0);
	return (0);
}*/

/*int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}*/

int	main(void)
{
	std::cout << "\033[1;31m------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;31m|           TESTS            |\033[0m" << std::endl;
	std::cout << "\033[1;31m------------------------------\033[0m" << std::endl;

	std::cout << std::endl <<"\033[1;32mconstructors:\033[0m" << std::endl;
	
	IMateriaSource* book_a = new MateriaSource();
	IMateriaSource* book_b = new MateriaSource();
	ICharacter*		pablo = new Character("pablo");
	ICharacter*		louis = new Character("louis");

	std::cout <<"\033[1;32mbasic tests:\033[0m" << std::endl;
	book_a->learnMateria(new Ice());
	book_a->learnMateria(new Cure());
	pablo->equip(book_a->createMateria("ice"));
	pablo->equip(book_a->createMateria("cure"));
	std::cout << "Name is: " << pablo->getName() << std::endl;
	pablo->use(0, *louis);
	pablo->use(1, *louis);
	std::cout <<"\033[1;32mMateriaSource tests:\033[0m" << std::endl;
	AMateria* test = new Ice();
	AMateria* test2 = new Cure();
	book_a->learnMateria(test);
	book_a->learnMateria(new Cure());
	book_a->learnMateria(test);
	book_a->learnMateria(NULL);
	book_a->learnMateria(test2);
	test = book_a->createMateria("ice");
	delete test;
	test = book_a->createMateria("cure");
	delete test;
	book_a->createMateria("");
	book_a->createMateria("plouf");
	book_b->learnMateria(NULL);
	book_b->createMateria("ice");
	MateriaSource	a;
	MateriaSource	b;
	a.learnMateria(new Ice());
	b = a;
	delete a.createMateria("ice");
	delete b.createMateria("ice");


	std::cout << std::endl <<"\033[1;32mdestructors:\033[0m" << std::endl;
	delete book_a;
	delete book_b;
	delete pablo;
	delete louis;
	delete test2;
}