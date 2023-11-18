/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:46:37 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 03:27:38 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog(const Dog &primary);
		Dog &operator=(const Dog &primary);
		void makeSound() const;
		~Dog();
};


Dog::Dog() : Animal()
{
	std::cout<< "Derived class Dog default constructor called" << std::endl;
	this->type = "DOG";
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
	std::cout<< this->type << " is saying AOUUU" << std::endl;
}

Dog::~Dog()
{
	std::cout<< "Derived class Dog destructor called" << std::endl;
}


int main()
{
	Dog obj;
	std::cout<< obj.getType() << std::endl;
	obj.makeSound();
	Animal *a = &obj;
	std::cout<< a->getType() << std::endl;
	a->makeSound();
}