/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:32:23 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/16 03:32:36 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"ClapTrap.hpp"

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
