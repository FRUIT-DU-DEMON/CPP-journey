/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 03:46:46 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/22 19:30:26 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *idea;
	public :
		Cat();
		Cat(const Cat &primary);
		Cat &operator=(const Cat &primary);
		void makeSound() const;
		~Cat();
};

#endif
