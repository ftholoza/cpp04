/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:48:55 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:48 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *stock[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource &to_copy);
		MateriaSource& operator=(MateriaSource &to_copy);
		~MateriaSource();
		void learnMateria(AMateria*) override;
		AMateria* createMateria(std::string const &type) override;
};

#endif