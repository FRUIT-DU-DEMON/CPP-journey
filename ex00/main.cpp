/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:40:23 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/23 22:55:31 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include <cstdlib>

class Zombie {
	private :
		std::string name;
	public :
		void announce();
		Zombie(std::string zombie_name);
		~Zombie();
};

Zombie::Zombie(std::string zombie_name) : name(zombie_name) {}

Zombie::~Zombie()
{
	std::cout<< this->name << " is destroyed!" << std::endl;
}

Zombie *newZombie(std::string name)
{
	return (new Zombie(name));
}

void randomChump(std::string name)
{
	Zombie z3(name);
	z3.announce();
}

void Zombie::announce()
{
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
	Zombie z1("makinch_dda7k");
	Zombie *z2 = newZombie("makinch_lla3b");
	
	z1.announce(); 
	z2->announce();
	delete z2;
	randomChump("ntoma_ma7tarmonach");
}