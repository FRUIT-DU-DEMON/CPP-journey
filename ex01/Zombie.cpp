/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:41:24 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/24 16:42:00 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Zombie.hpp"

void Zombie::set_name(std::string zombie_name)
{
	this->name = zombie_name;
}

Zombie::~Zombie()
{
	std::cout<< this->name << " is destroyed!" << std::endl;
}

void Zombie::announce()
{
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
