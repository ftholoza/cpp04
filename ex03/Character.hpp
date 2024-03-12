/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:42:30 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/12 01:05:17 by francesco        ###   ########.fr       */
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
		std::string const &getName() const override;
		void	equip(AMateria *m) override;
		void	unequip(int idx) override;
		void	use(int idx, ICharacter& target) override;
		void	display();
};

#endif