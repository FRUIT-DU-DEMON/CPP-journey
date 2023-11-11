/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:09:59 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/11 01:12:55 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor invoked" << std::endl;
	this->fpn = 0;
}

Fixed::Fixed(const Fixed &primary)
{
	std::cout << "Copy constructor invoked" << std::endl;
	*this = primary; //assigning object to another where CAO= is invoked
}

Fixed &Fixed::operator=(const Fixed &primary)
{
	//protection if self-assignment to avoid unnecessary work
	std::cout << "Copy assignment operator invoked" << std::endl;
	if (this != &primary)
		setRawBits(primary.getRawBits());
	return (*this);
}

Fixed::Fixed(const int int_val)
{
	std::cout << "Int constructor invoked" << std::endl;
	setRawBits(int_val << this->fpn_binary); //allocates (fpn_binary)bits for the fractional part by adding 8bits to the left
}

Fixed::Fixed(const float float_val)
{
	std::cout << "Float constructor invoked" << std::endl;
	setRawBits(roundf(float_val * (1 << this->fpn_binary))); // *256, fpn holds the encoded form of the binary representation of the fixed point value with both int and fractional part
}

float Fixed::toFloat() const
{
	// /256, the encoded form converted back the a flpn;
	return (static_cast<float>(this->fpn) / (1 << this->fpn_binary));
}

int Fixed::toInt() const
{
	//8bits left shift to deallocate bits of fractional part
	return (this->fpn >> this->fpn_binary);
}

int Fixed::getRawBits() const
{
	return (this->fpn);
}

void Fixed::setRawBits(int const raw)
{
	this->fpn = raw;
}

Fixed::~Fixed()
{
	std::cout<< "Destructor invoked" << std::endl;
}

std::ostream &operator<<(std::ostream &output_console, const Fixed &fp)
{
	//cout is an instance of ostream(which is a base class of ofstream and cout itself) class and both connected by default
	output_console << fp.toFloat();
	return (output_console);
}
