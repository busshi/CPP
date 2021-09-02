/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:15:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 21:53:57 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public:
			ScavTrap( std::string const & name = "default ScavTrap" );
			ScavTrap( ScavTrap const & src );
			~ScavTrap( void );

			ScavTrap &	operator=( ScavTrap const & rhs );

			void	guardGate( void );

};

#endif
