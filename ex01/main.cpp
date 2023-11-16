/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 02:03:23 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/16 03:19:02 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"ScavTrap.hpp"

int main()
{
	// ClapTrap Pacifista("Shibokai kuma");
    ScavTrap Cyborg("Franky");
	Cyborg.attack("CP9");
	// Pacifista.attack("Kizaru");
	// Pacifista = Cyborg;
	// Pacifista.attack("Ivankov");
	Cyborg.guardGate();
}
