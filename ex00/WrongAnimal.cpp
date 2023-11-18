/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:13:41 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 15:42:15 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout<< "Base class WrongAnimal default constructor called" << std::endl;
	this->type = "Hayawan";
}

WrongAnimal::WrongAnimal(const WrongAnimal &primary)
{
	std::cout<< "Base class WrongAnimal copy constructor called" << std::endl;
	this->type = primary.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &primary)
{
	std::cout<< "Base class WrongAnimal copy assignment operator called" << std::endl;
	if (this != &primary)
		this->type = primary.type;
	return (*this);
}

// WrongAnimal::WrongAnimal(const std::string &which_type)
// {
// 	std::cout<< "WrongAnimal " << which_type << " is born" << std::endl;
// 	this->type = which_type;
// }

void WrongAnimal::makeSound() const
{
	std::cout<< this->type << " is making the wrong sound!" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout<< "Base class WrongAnimal destructor called" << std::endl;
}
