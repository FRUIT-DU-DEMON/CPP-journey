/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:58:23 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/10 04:21:36 by hlabouit         ###   ########.fr       */
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
#include <cmath>

///////////////////// class //////////////////////
class Fixed {
	private :
		int fpn;
		static const int fpn_binary = 8;
	public :
		Fixed();
		Fixed(const Fixed &primary);
		Fixed &operator=(const Fixed &primary);
		//overloaded <<
		Fixed(const int int_val);
		Fixed(const float float_val);
		float toFloat() const;
		int toInt() const;
		int getRawBits() const;
		void setRawBits(int const raw);
		~Fixed();
};
///////////////////// class //////////////////////


Fixed::Fixed(const float float_val)
{
	std::cout << "Float constructor invoked" << std::endl;
	this->fpn = roundf(float_val * (1 << this->fpn_binary)); // *256, fpn holds the encoded form of the binary representation of the fixed point value with both int and fractional part
}

Fixed::Fixed(const int int_val)
{
	std::cout << "Float constructor invoked" << std::endl;
	this->fpn = int_val << this->fpn_binary; //allocates (fpn_binary)bits for the fractional part by adding 8bits to the left
}

float Fixed::toFloat() const
{
	float flpn = this->fpn / (1 << this->fpn_binary); // /256, the the encoded form converted back the a flpn;
	return (flpn);
}

int Fixed::toInt() const
{
	int int_val = static_cast<int>(this->fpn) ;// otherwise shifting this->fpn >> this->fpn_binary;
	return (int_val);
}


Fixed::Fixed()
{
	std::cout << "Default constructor invoked" << std::endl;
	this->fpn = 0;
}

Fixed::Fixed(const Fixed &primary)
{
	std::cout << "Copy constructor invoked" << std::endl;
	this->fpn = primary.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &primary)
{
	//protection if self-assignment to avoid unnecessary work
	std::cout << "Copy assignment operator invoked" << std::endl;
	if (this != &primary)
		this->fpn = primary.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpn);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fpn = raw;
}

Fixed::~Fixed()
{
	std::cout<< "Destructor invoked" << std::endl;
}


int main()
{
	
}