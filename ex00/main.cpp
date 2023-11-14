/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:00:16 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/14 04:56:57 by hlabouit         ###   ########.fr       */
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
	std::cout<< "Default constructor called" << std::endl;
	this->name = "unknown";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &primary)
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = primary;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &primary)
{
	std::cout<< "Copy assignment operator called" << std::endl;
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
	std::cout<< "ClapTrap " << which_name << " is born" << std::endl;
	this->name = which_name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing "
			<< this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->name << " can't attack due to low hit points or energy!"
			<< std::endl;
}








ClapTrap::~ClapTrap()
{
	std::cout<< "Destructor invoked" << std::endl;
}


int main()
{
	
}