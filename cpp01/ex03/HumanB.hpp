/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:07:28 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/27 11:44:26 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {

	private:
				std::string const &	_name;
				Weapon const *		_weapon;

	public:
				HumanB( std::string const & name );
				~HumanB( void );

				void		attack( void );
				void		setWeapon( Weapon const & weapon );

};

#endif
