/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:12:32 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/25 03:39:20 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include <cstdlib>


class Weapon {
	private :
		std::string type;
	public :
		const std::string &getType();
		void setType(std::string newType);
};

class HumanA {
	private :
		std::string name;
	public :
		Weapon hA;
		void attack(Weapon Human);
};

class HumanB {
	private :
		std::string name;
	public :
		Weapon hB;
		void attack(Weapon Human);
};




int main()
{
	
}