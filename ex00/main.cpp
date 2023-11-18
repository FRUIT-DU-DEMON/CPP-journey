/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:46:37 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 15:12:17 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	//deleting objects of a polymorphic class type(a class with virtual functions)
	delete meta;
	delete j;
	delete i;
	return 0;
}