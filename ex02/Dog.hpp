/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:14:32 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/11 10:53:48 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog &to_copy);
		void	makeSound()override;
		Brain *getBrain();
		Dog& operator=(Dog &to_copy);
		void	setIdea(std::string idea, int i);
		void	displayIdeas();
	private:
		Brain *_brain;
};

#endif