/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:33:57 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/16 03:34:11 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout<< "Derived class default constructor called" << std::endl;
	this->name = "unknown";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &primary) : ClapTrap(primary)
{
	std::cout<< "Derived class copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &primary)
{
	std::cout<< "Derived class copy assignment operator called" << std::endl;
    if (this != &primary)
        ClapTrap::operator=(primary);
    return (*this);
}

ScavTrap::ScavTrap(const std::string &which_name) : ClapTrap(which_name)
{
	std::cout<< "ScavTrap robot " << which_name << " is born" << std::endl;
	this->name = which_name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ScavTrap robot " << this->name << " attacks " << target << " causing "
			<< this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
	}
	else
		std::cout << "ScavTrap robot " << this->name <<
			" can't attack due to low hit points or energy otherwise he needs Cola!" << std::endl;
}

void ScavTrap::guardGate()
{
	//low hit points or energy protection !!
	std::cout << "ScavTrap robot " << this->name << " is now in Gatekeeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<< "Derived class destructor invoked" << std::endl;
}
