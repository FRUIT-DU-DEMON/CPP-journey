/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:46:37 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 01:36:47 by hlabouit         ###   ########.fr       */
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



int main()
{
	Animal ex;
	ex.makeSound();
}