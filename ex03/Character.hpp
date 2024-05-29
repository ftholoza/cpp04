/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:42:30 by ftholoza          #+#    #+#             */
/*   Updated: 2024/05/29 20:32:35 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*inventory[4];
		int			i;
	public:
		Character();
		Character(std::string name);
		Character(Character &to_copy);
		Character &operator=(Character &to_copy);
		~Character();
		std::string const &getName() const ;
		void	equip(AMateria *m) ;
		void	unequip(int idx) ;
		void	use(int idx, ICharacter& target) ;
		void	display();
};

#endif