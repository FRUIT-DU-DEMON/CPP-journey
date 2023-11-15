/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:57:06 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/14 23:58:07 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include<fstream>            
#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include<cstdlib>
#include<cmath>

class ClapTrap {
	private :
		std::string name;
		unsigned hit_points;
		unsigned energy_points;
		unsigned attack_damage;
	public :
		ClapTrap();
		ClapTrap(const ClapTrap &primary);
		ClapTrap &operator=(const ClapTrap &primary);
		ClapTrap(const std::string &which_name);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount); 
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif
