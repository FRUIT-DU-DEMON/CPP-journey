/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:45:09 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/16 04:40:10 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(const FragTrap &primary);
		FragTrap &operator=(const FragTrap &primary);
		FragTrap(const std::string &which_name);
		void highFivesGuys(void);
		~FragTrap();
};

FragTrap::FragTrap() : ClapTrap()
{
	std::cout<< "Derived class FragTrap default constructor called" << std::endl;
	this->name = "unknown";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &primary) : ClapTrap(primary)
{
	std::cout<< "Derived class FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &primary)
{
	std::cout<< "Derived class FragTrap copy assignment operator called" << std::endl;
	if (this != &primary)
		ClapTrap::operator=(primary);
	return (*this);
}

FragTrap::FragTrap(const std::string &which_name) : ClapTrap(which_name)
{
	std::cout<< "FragTrap robot " << which_name << " is born" << std::endl;
	this->name = which_name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

void FragTrap::highFivesGuys()
{
	//low hit points or energy protection !!
	std::cout <<"Who's up for a high five ?!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<< "Derived class FragTrap destructor invoked" << std::endl;
}



int main()
{
	
}