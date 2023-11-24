/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:55:01 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/22 19:03:20 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
	std::cout<< "Base class Animal default constructor called" << std::endl;
	this->type = "l'ex";
}

Animal::Animal(const Animal &primary)
{
	std::cout<< "Base class Animal copy constructor called" << std::endl;
	this->type = primary.type;
}

Animal &Animal::operator=(const Animal &primary)
{
	std::cout<< "Base class Animal copy assignment operator called" << std::endl;
	if (this != &primary)
		this->type = primary.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout<< this->type << " is saying something! but who cares" << std::endl;
}

const std::string &Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout<< "Base class Animal destructor called" << std::endl;
}
