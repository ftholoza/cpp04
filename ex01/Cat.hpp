/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:09:09 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/10 13:06:15 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(Cat &to_copy);
		void	makeSound() const;
		Brain *getBrain();
		Cat& operator=(Cat const &to_copy);
		void	setIdea(std::string idea, int i);
		void	displayIdeas();
	private:
		Brain *_brain;

};

#endif