/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 03:47:21 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/22 19:36:29 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout<< "Derived class Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->idea = new Brain();
}

Cat::Cat(const Cat &primary) : Animal(primary)
{
	std::cout<< "Derived class Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &primary)
{
	std::cout<< "Derived class Cat copy assignment operator called" << std::endl;
	if (this != &primary)
		Animal::operator=(primary);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout<< this->type << " is saying MIAOUU" << std::endl;
}

Cat::~Cat()
{
	std::cout<< "Derived class Cat destructor called" << std::endl;
	delete this->idea;
}
