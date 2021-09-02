/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:05:35 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 21:53:14 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class	ClapTrap {

	protected:
			std::string		_name;
			unsigned int	_hitPoints, _energyPoints, _attackDamage;

	public:
			ClapTrap( std::string const & name = "default ClapTrap" );
			ClapTrap( ClapTrap const & src );
			~ClapTrap( void );

			ClapTrap &	operator=( ClapTrap const & rhs );

			void	attack( std::string const & target );
			void	takeDamage( unsigned int amount );
			void	beRepaired( unsigned int amount );

};

#endif
