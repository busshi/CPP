/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 22:19:02 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 22:36:20 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

		public:
				FragTrap( std::string const & name = "default ClapTrap" );
				FragTrap( FragTrap const & src );
				~FragTrap( void );

				FragTrap &	operator=( FragTrap const & rhs );

				void		highFivesGuys( void );

};

#endif
