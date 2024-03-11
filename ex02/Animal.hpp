/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:04:24 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/11 10:52:53 by ftholoza         ###   ########.fr       */
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
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal &to_copy);
		Animal& operator=(Animal &to_copy);
		virtual std::string	getType() const;	
		virtual void	makeSound() = 0;
};

#endif