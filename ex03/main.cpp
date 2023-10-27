/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:12:32 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/27 16:53:48 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include<cstdlib>

//////////////// Weapon class ///////////////////////////////////////////////
class Weapon {
	private :
		std::string type;
	public :
		Weapon(const std::string &whichType);
		const std::string &getType();
		void setType(const std::string &newType);
};

Weapon::Weapon(const std::string &whichType) : type(whichType) {}

const std::string &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(const std::string &newType)
{
	this->type = newType;
}

//////////////// Weapon class ///////////////////////////////////////////////

//////////////// HumanA class ///////////////////////////////////////////////
class HumanA {
	private :
		std::string name;
		Weapon &weaponA;
	public :
		HumanA(std::string person, Weapon &whichWeapon);
		void attack();
};

HumanA::HumanA(std::string person, Weapon &whichWeapon) : name(person), weaponA(whichWeapon) {}

void HumanA::attack()
{
	std::cout<< &weaponA.getType() << std::endl;
	std::cout<< this->name << " attacks with their " << weaponA.getType() << std::endl;
}
//////////////// HumanA class ///////////////////////////////////////////////
		
class HumanB {
//////////////// HumanB class ///////////////////////////////////////////////
	private :
		std::string name;
		Weapon *weaponB;
	public :
		HumanB(const std::string &person);
		void attack();
		void setWeapon(Weapon &whichWeapon);
};

HumanB::HumanB(const std::string &person) : name(person), weaponB(nullptr) {}

void HumanB::attack()
{
		std::cout<< &weaponB->getType() << std::endl;
	
	if (this->weaponB != nullptr)
		std::cout<< this->name << " attacks with their " << weaponB->getType() << std::endl;
	else
		std::cout<< this->name << " tta jib lbala!" << std::endl;
		
}

void HumanB::setWeapon(Weapon &whichWeapon)
{
	this->weaponB = &whichWeapon;
}

//////////////// HumanB class ///////////////////////////////////////////////


int main()
{
	{
		Weapon club = Weapon("BALA");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("CHI 9ALWA");
		bob.attack();
	}
	{
		// Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		// jim.setWeapon(club);
		jim.attack();
		// club.setType("some other type of club");
		// jim.attack();
	}
	return 0;
}