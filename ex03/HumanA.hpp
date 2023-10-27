/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:19:02 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/27 17:20:36 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMANA_H
# define HUMANA_H

#include"Weapon.hpp"

class HumanA {
	private :
		std::string name;
		Weapon &weapon;
	public :
		HumanA(std::string person, Weapon &whichWeapon);
		void attack();
};

#endif
