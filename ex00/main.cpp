/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:40:23 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/23 23:31:45 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Zombie.hpp"

int main()
{
	Zombie z("ruun");
	z.announce(); 
	Zombie *new_z = newZombie("dumb");
	new_z->announce();
	delete new_z;
	randomChump("ass");
	return (0);
}
