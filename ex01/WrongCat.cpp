/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:49:32 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 16:26:38 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal()
{
	std::cout<< "Derived class WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &primary) : WrongAnimal(primary)
{
	std::cout<< "Derived class WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &primary)
{
	std::cout<< "Derived class WrongCat copy assignment operator called" << std::endl;
	if (this != &primary)
		WrongAnimal::operator=(primary);
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout<< this->type << " is making the wrong sound!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout<< "Derived class WrongCat destructor called" << std::endl;
}
