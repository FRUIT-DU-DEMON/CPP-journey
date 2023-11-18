/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:46:37 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 00:28:56 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// #ifndef CLAPTRAP_H
// # define CLAPTRAP_H
// #endif

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include<cstdlib>
#include<cmath>

class Animal {
	protected :
		std::string type;//l'ex
	public :
		Animal();
		Animal(const Animal &primary);
		Animal &operator=(const Animal &primary);
		Animal(const std::string &which_type);
		virtual void makeSound() const;
		const std::string &getType() const;
		~Animal();
};

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

Animal::Animal(const std::string &which_type)
{
	std::cout<< "Animal " << which_type << " is born" << std::endl;
	this->type = which_type;
}

void Animal::makeSound() const
{
	std::cout<< this->type << " is saying something! but who cares" << std::endl;
}

const std::string &Animal::getType() const
{
	return (this->type);
}


int main()
{
	Animal ex;
	ex.makeSound();
}