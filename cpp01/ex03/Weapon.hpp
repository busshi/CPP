/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 10:36:01 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/27 10:53:53 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon {

	private:
			std::string	_type;

	public:
			Weapon( std::string const & type );
			~Weapon( void );

			std::string const &	getType( void ) const;
			void				setType( std::string const & type );

};

#endif
