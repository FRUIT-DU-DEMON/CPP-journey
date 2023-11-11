/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:08:29 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/11 02:25:05 by hlabouit         ###   ########.fr       */
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
#include <cmath>

class Fixed {
	private :
		int fpn;
		static const int fpn_binary = 8;
	public :
		Fixed();
		Fixed(const Fixed &primary);
		Fixed &operator=(const Fixed &primary);
		Fixed(const int int_val);
		Fixed(const float float_val);
		float toFloat() const;
		int toInt() const;
		int getRawBits() const;
		void setRawBits(int const raw);
		~Fixed();
};

std::ostream &operator<<(std::ostream &output_console, const Fixed &fp);

#endif
