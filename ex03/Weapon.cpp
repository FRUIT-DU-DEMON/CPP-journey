/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:17:29 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/27 17:18:16 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Weapon.hpp"

Weapon::Weapon(const std::string &whichType) : type(whichType) {}

const std::string &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(const std::string &newType)
{
	this->type = newType;
}
