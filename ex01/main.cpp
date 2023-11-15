/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 02:03:23 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/15 21:22:07 by hlabouit         ###   ########.fr       */
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

class ClapTrap {
	protected :
		std::string name;
		unsigned hit_points;
		unsigned energy_points;
		unsigned attack_damage;
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

////////////////////////////////// ScavTrap CPP //////////////////////////////////
class ScavTrap : public ClapTrap 
{
    public :
        ScavTrap();
        ScavTrap(const ScavTrap &primary);
        // ScavTrap &operator=(const ScavTrap &primary);
        // ScavTrap(const std::string &which_name);
		// void attack(const std::string &target);
        // void guardGate();
        // ~ScavTrap();
};

ScavTrap::ScavTrap() //: ClapTrap()
{
	std::cout<< "Derived class default constructor called" << std::endl;
	this->name = "unknown";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &primary) //: ClapTrap(primary)
{
	std::cout<< "Derived class copy constructor called" << std::endl;
	*this = primary;   
}





////////////////////////////////// ScavTrap CPP //////////////////////////////////

////////////////////////////////// ClapTrap CPP //////////////////////////////////
ClapTrap::ClapTrap()
{
	std::cout<< "Base class default constructor called" << std::endl;
	this->name = "unknown";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &primary)
{
	std::cout<< "Base class copy constructor called" << std::endl;
	*this = primary;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &primary)
{
	std::cout<< "Base class copy assignment operator called" << std::endl;
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
		std::cout << "ClapTrap " << this->name <<
			" can't attack due to low hit points or energy otherwise he needs Cola!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount
			<< " points of damage!" << std::endl;
		if ((this->hit_points <= amount))
			this->hit_points = 0;
		else
			this->hit_points -= amount;
	}
	else
		std::cout << "ClapTrap " << this->name
			<< " is already down can't take more damage due to low hit points or energy otherwise he needs Cola!"
				<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " is being repaired gaining "
			<< amount << " hit points!" << std::endl;
		this->hit_points += amount;
		this->energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->name <<
			" can't be repaired it's already down due to low hit points or energy otherwise he needs Cola!"
				<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout<< "Base class destructor invoked" << std::endl;
}
////////////////////////////////// ClapTrap CPP //////////////////////////////////


int main()
{
    ScavTrap obj;
    obj.attack("chiwahd");
}