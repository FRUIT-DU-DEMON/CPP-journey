/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:55:11 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 04:16:57 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ANIMAL_H
# define ANIMAL_H

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include<cstdlib>
#include<cmath>

class Animal {
	protected :
		std::string type;
	public :
		Animal();
		Animal(const Animal &primary);
		Animal &operator=(const Animal &primary);
		// Animal(const std::string &which_type);
		virtual void makeSound() const;//virtual keyword used for a polymorphic Behavior enabling derived classes to override the function
		const std::string &getType() const;
		virtual ~Animal();
};

#endif
