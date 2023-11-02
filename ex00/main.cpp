/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:56:44 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/02 07:47:54 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// #ifndef HARL_H
// # define HARL_H
// #endif
#include<fstream>            
#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include <cstdlib>

class ttsstt {
	private:
		int vall;
	public:
		ttsstt(int assign);//constructor
		ttsstt(const ttsstt &oldObj);//copy constructor
		ttsstt &operator=(const ttsstt &oldOObj);//Copy assignment operator
		void print();
		void change(int changement);
};

void ttsstt::change(int changement)
{
	this->vall = changement;
}

void ttsstt::print()
{
	std::cout<< this->vall << std::endl;
}

ttsstt::ttsstt(int assign) : vall(assign) {}
ttsstt::ttsstt(const ttsstt &oldObj) : vall(oldObj.vall) {}



int main()
{
	ttsstt obj1(100);
	obj1.print();
	ttsstt obj2(200);
	obj2.print();
	obj2.change(1337);
	obj2 = obj1;
	obj1.print();
	obj2.print();
	
}
