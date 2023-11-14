/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:00:16 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/14 02:46:12 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// #ifndef FIXED_H
// # define FIXED_H
// #endif

#include<fstream>            
#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include<cstdlib>
#include<cmath>


class ClapTrap {
	private :
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
	public :
		ClapTrap();
		ClapTrap(const ClapTrap &primary);
		ClapTrap &operator=(const ClapTrap &primary);
		ClapTrap(const std::string &which_name);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount); 
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

ClapTrap::ClapTrap()
{
	std::cout<< "Default constructor invoked" << std::endl;
	this->name = "unknown";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &primary)
{
	std::cout<< "Copy constructor invoked" << std::endl;
	*this = primary;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &primary)
{
	std::cout<< "Copy assignment operator invoked" << std::endl;
	if (this != &primary)
	{
		this->name = primary.name;
		this->hit_points = primary.hit_points;
		this->energy_points = primary.energy_points;
		this->attack_damage = primary.attack_damage;
	}
	return (*this);
}

ClapTrap::ClapTrap(const std::string &which_name)
{
	
}







int main()
{
	
}