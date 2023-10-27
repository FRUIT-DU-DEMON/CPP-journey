/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:13:26 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/27 18:04:44 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WEAPON_H
# define WEAPON_H

#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include<cstdlib>

class Weapon {
	private :
		std::string type;
	public :
		Weapon(const std::string &whichType);
		const std::string &getType();
		void setType(const std::string &newType);
};

#endif
