/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:22:40 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/27 17:23:52 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMANB_H
# define HUMANB_H

#include"Weapon.hpp"

class HumanB {
	private :
		std::string name;
		Weapon *weapon;
	public :
		HumanB(std::string person);
		void attack();
		void setWeapon(Weapon &whichWeapon);
};

#endif
