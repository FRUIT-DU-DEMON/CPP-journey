/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:56:44 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/04 22:24:05 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// #ifndef FIXED_H
// # define FIXED_H
// #endif
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

Fixed::Fixed()
{
	this->fpn = 0;
	std::cout << "Default constructor is invoked" << std::endl;
}

Fixed::Fixed(const Fixed &primary)
{
	this->fpn = primary.fpn;
	std::cout << "Copy constructor is invoked" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &primary)
{
	//protection if self-assignment to avoid unnecessary work
	if (this != &primary)
		this->fpn = primary.fpn;
	std::cout << "Copy assignment operator is invoked" << std::endl;
	return (*this);
}







int main()
{
	
}