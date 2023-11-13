/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:32:38 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/13 05:35:05 by hlabouit         ###   ########.fr       */
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

std::ostream &operator<<(std::ostream &output_console, const Fixed &fp)
{
	//cout is an instance of ostream(which is a base class of ofstream and cout itself) class and both connected by default
	output_console << fp.toFloat();
	return (output_console);
}

int Fixed::operator>(const Fixed &primary) const
{
	return (this->fpn > primary.fpn);
}

int Fixed::operator<(const Fixed &primary) const
{
	return (this->fpn < primary.fpn);
}

int Fixed::operator>=(const Fixed &primary) const
{
	return (this->fpn >= primary.fpn);
}

int Fixed::operator<=(const Fixed &primary) const
{
	return (this->fpn <= primary.fpn);
}

int Fixed::operator==(const Fixed &primary) const
{
	return (this->fpn == primary.fpn);
}

int Fixed::operator!=(const Fixed &primary) const
{
	return (this->fpn != primary.fpn);
}

float Fixed::operator+(const Fixed &primary) const
{
	return (this->toFloat() + primary.toFloat());
}

float Fixed::operator-(const Fixed &primary) const
{
	return (this->toFloat() - primary.toFloat());
}

float Fixed::operator*(const Fixed &primary) const
{
	return (this->toFloat() * primary.toFloat());
}

float Fixed::operator/(const Fixed &primary) const
{
	return (this->toFloat() / primary.toFloat());
}

Fixed Fixed::operator++(int)
{
	//post-increment
	Fixed old_state = *this;
	this->fpn++;
	return (old_state);//a=2, b=0, b=a++, b=2 and a=3
}

Fixed Fixed::operator--(int)
{
	//post-decrement
	Fixed old_state = *this;
	this->fpn--;
	return (old_state);//a=2, b=0, b=a--, b=2 and a=1
}

Fixed Fixed::operator++()
{
	//pre-increment
	this->fpn++;
	return (*this);//a=2, b=0, b=a++, b=3 and a=3
}

Fixed Fixed::operator--()
{
	//pre-decrement
	this->fpn--;
	return (*this);//a=2, b=0, b=a--, b=1 and a=1
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1.fpn <= obj2.fpn)
		return (obj1);
	else
		return (obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1.fpn >= obj2.fpn)
		return (obj1);
	else
		return (obj2);
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1.fpn <= obj2.fpn)
		return (obj1);
	else
		return (obj2);
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1.fpn >= obj2.fpn)
		return (obj1);
	else
		return (obj2);
}

Fixed::~Fixed()
{
	std::cout<< "Destructor invoked" << std::endl;
}
