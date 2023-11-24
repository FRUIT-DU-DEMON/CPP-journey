/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 03:38:31 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/22 19:30:15 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal
{
	private :
		Brain *idea;
	public :
		Dog();
		Dog(const Dog &primary);
		Dog &operator=(const Dog &primary);
		void makeSound() const;
		~Dog();
};

#endif
