/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:11:16 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 16:19:19 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include<cstdlib>
#include<cmath>

class WrongAnimal {
	protected :
		std::string type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &primary);
		WrongAnimal &operator=(const WrongAnimal &primary);
        //WrongAnimal(const std::string &which_type);
		void makeSound() const;//virtual keyword here unused so this function wont be overridden in the base class subObj when it's called through a *ptr or &ref
		const std::string &getType() const;
		virtual ~WrongAnimal();
};

#endif
