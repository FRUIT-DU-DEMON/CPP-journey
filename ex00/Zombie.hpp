/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:14:05 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/23 23:20:16 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include <cstdlib>

class Zombie {
	private :
		std::string name;
	public :
		void announce();
		Zombie(std::string zombie_name);
		~Zombie();
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
