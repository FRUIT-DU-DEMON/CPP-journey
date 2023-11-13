/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:00:16 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/13 23:37:09 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// #ifndef FIXED_H
// # define FIXED_H
// #endif

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
		int hit_points = 10;
		int energy_points = 10;
		int attack_damage = 0;
	public :
		ClapTrap();
		ClapTrap(const ClapTrap &primary);
		ClapTrap &operator=(const ClapTrap &primary);
		~ClapTrap();
	
};


int main()
{
	
}