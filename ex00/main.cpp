/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:46:37 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/17 22:49:21 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// #ifndef CLAPTRAP_H
// # define CLAPTRAP_H
// #endif

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include<cstdlib>
#include<cmath>

class Animal {
	protected :
		std::string type;//l'ex
	public :
		Animal();
		Animal(const Animal &primary);
		Animal &operator=(const Animal &primary);
		Animal(const std::string &which_type);
		virtual void makeSound();
		std::string getType();
		~Animal();
};


int main()
{
	
}