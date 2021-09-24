/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printConvert.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:44:09 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/24 21:46:04 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTCONVERT_HPP
# define PRINTCONVERT_HPP

# include <iostream>
# include <iomanip>
# include <cstring>
# include <cstdlib>
# include "ScalarConversion.hpp"

enum    e_pseudo {
	NON_PSEUDO,
	NAN,
	INF,
	NEG_INF
};

void			printChar( ScalarConversion sc, enum e_pseudo pseudo );
void			printInt( ScalarConversion sc, enum e_pseudo pseudo );
void			printFloat( ScalarConversion sc, unsigned precision, enum e_pseudo pseudo );
void			printDouble( ScalarConversion sc, unsigned precision , enum e_pseudo pseudo );

#endif
