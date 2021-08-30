/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:54:01 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/30 14:03:10 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class	Karen {

	private:
				void	debug( void );
				void	info( void );
				void	warning( void );
				void	error( void );

	public:
				Karen( void );
				~Karen( void );

				void	complain( std::string level );
};

#endif
