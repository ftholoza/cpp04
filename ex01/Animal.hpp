/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:04:24 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/08 18:20:36 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	Animal
{
	protected:
		std::string type;
		Brain		*_brain;
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal &to_copy);
		Animal& operator=(Animal &to_copy);
		std::string	getType() const;
		virtual Brain *getBrain();		
		virtual void	makeSound() const;
};

#endif