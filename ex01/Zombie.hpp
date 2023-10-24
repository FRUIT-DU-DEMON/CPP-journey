/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:40:09 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/24 16:41:08 by hlabouit         ###   ########.fr       */
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
		void set_name(std::string zombie_name);
		~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif
