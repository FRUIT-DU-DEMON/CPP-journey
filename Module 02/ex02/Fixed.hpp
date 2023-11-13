/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:30:32 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/13 05:43:28 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_H
# define FIXED_H

#include<fstream>            
#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include<cstdlib>
#include<cmath>

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
		// overloaded operators
		int operator>(const Fixed &primary) const;
		int operator<(const Fixed &primary) const;
		int operator>=(const Fixed &primary) const;
		int operator<=(const Fixed &primary) const;
		int operator==(const Fixed &primary) const;
		int operator!=(const Fixed &primary) const;
		float operator+(const Fixed &primary) const;
		float operator-(const Fixed &primary) const;
		float operator*(const Fixed &primary) const;
		float operator/(const Fixed &primary) const;
		Fixed operator++();//post-increment
		Fixed operator--();//post-decrement
		Fixed operator++(int);//pre-increment
		Fixed operator--(int);//pre-decrement
		// min max overloaded functions
		static Fixed &min(Fixed &obj1, Fixed &obj2);
		static Fixed &max(Fixed &obj1, Fixed &obj2);
		static const Fixed &min(const Fixed &obj1, const Fixed &obj2);
		static const Fixed &max(const Fixed &obj1, const Fixed &obj2);
		~Fixed();
};

std::ostream &operator<<(std::ostream &output_console, const Fixed &fp);

#endif
