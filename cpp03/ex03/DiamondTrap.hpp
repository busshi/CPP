/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 09:38:41 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/06 09:24:52 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class	DiamondTrap : public FragTrap, public ScavTrap {

		public:
				DiamondTrap( std::string const & name = "default DiamondTrap" );
				DiamondTrap( DiamondTrap const & src );
				~DiamondTrap( void );

				DiamondTrap &	operator=( DiamondTrap const & rhs );

				void			whoAmI( void );				

};

#endif
