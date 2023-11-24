/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:55:11 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/22 19:04:10 by hlabouit         ###   ########.fr       */
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

//polymorphic class
class Animal {
	protected :
		std::string type;
	public :
		Animal();
		Animal(const Animal &primary);
		Animal &operator=(const Animal &primary);
		virtual void makeSound() const;//virtual keyword used for a polymorphic Behavior enabling derived classes to override the function
		const std::string &getType() const;
		virtual ~Animal();
};

#endif
