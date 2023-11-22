/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 03:40:12 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 15:04:44 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout<< "Derived class Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &primary) : Animal(primary)
{
	std::cout<< "Derived class Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &primary)
{
	std::cout<< "Derived class Dog copy assignment operator called" << std::endl;
	if (this != &primary)
		Animal::operator=(primary);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout<< this->type << " is saying HAOUUU" << std::endl;
}

Dog::~Dog()
{
	std::cout<< "Derived class Dog destructor called" << std::endl;
}
