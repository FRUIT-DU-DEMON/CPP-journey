/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 05:44:31 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/16 05:53:32 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include<cstdlib>
#include<cmath>

#include"ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(const FragTrap &primary);
		FragTrap &operator=(const FragTrap &primary);
		FragTrap(const std::string &which_name);
		void highFivesGuys(void);
		~FragTrap();
};

#endif
