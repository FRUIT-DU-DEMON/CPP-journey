/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:00:16 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/15 00:03:59 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"ClapTrap.hpp"

int main()
{
	ClapTrap Cyborg("Franky");
	Cyborg.attack("CP9");
	Cyborg.takeDamage(1);
	Cyborg.beRepaired(2);
	return (0);
}
