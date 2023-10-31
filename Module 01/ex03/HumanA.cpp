/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:20:52 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/27 17:32:20 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"HumanA.hpp"

HumanA::HumanA(std::string person, Weapon &whichWeapon) : name(person), weapon(whichWeapon) {}

void HumanA::attack()
{
	std::cout<< this->name << " attacks with their " << weapon.getType() << std::endl;
}
