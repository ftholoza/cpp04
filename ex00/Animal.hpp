/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:04:24 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/06 20:34:42 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(Animal &to_copy);
		Animal& operator=(Animal const &to_copy);
		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif