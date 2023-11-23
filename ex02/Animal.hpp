/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:55:11 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/23 17:16:21 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include<cstdlib>
#include<cmath>

//Abstract class
class Animal {
	protected :
		std::string type;
	public :
		Animal();
		Animal(const Animal &primary);
		Animal &operator=(const Animal &primary);
		virtual void makeSound() const = 0;// pure virtual fuction which makes this Class Abstract
		const std::string &getType() const;
		virtual ~Animal();
};

#endif
