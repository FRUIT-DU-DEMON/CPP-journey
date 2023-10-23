/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:40:23 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/23 18:04:33 by hlabouit         ###   ########.fr       */
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
};

Zombie::Zombie(std::string zombie_name) : name(zombie_name) {}

void randomChump(std::string name)
{
	Zombie z2(name);
	z2.announce();
}

void Zombie::announce()
{
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
	Zombie z1("makinch_dda7k");
	z1.announce(); 
	randomChump("makinch_lla3b");
	
}