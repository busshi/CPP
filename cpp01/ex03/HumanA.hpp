/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 10:55:20 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/27 11:44:28 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {

	private:
			std::string const &	_name;
			Weapon const &		_weapon;

	public:
			HumanA( std::string const & name, Weapon const & weapon );
			~HumanA( void );

			void		attack( void );

};

#endif
