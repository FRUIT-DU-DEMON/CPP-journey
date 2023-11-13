/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:16:13 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/05 22:59:56 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_H
# define FIXED_H

#include<fstream>            
#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include <cstdlib>

class Fixed {
	private :
		int fpn;
		static const int fpn_binary = 8;
	public :
		Fixed();
		Fixed(const Fixed &primary);
		Fixed &operator=(const Fixed &primary);
		int getRawBits() const;
		void setRawBits(int const raw);
		~Fixed();
};

#endif
