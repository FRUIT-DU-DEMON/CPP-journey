/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:46:37 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 16:10:01 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
	////////// objects with a virtual makeSound() //////////
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
	////////// objects with a virtual makeSound() //////////
	
	////////// objects without a virtual makeSound() //////////
	const WrongAnimal* W_meta = new WrongAnimal();
	const WrongAnimal* W_i = new WrongCat();
	
	std::cout << W_i->getType() << " " << std::endl;
	W_i->makeSound();
	W_meta->makeSound();
	
	delete W_meta;
	delete W_i;
	////////// objects without a virtual makeSound() //////////
	return (0);
}
