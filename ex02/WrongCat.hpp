/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:48:09 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/18 16:07:01 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &primary);
		WrongCat &operator=(const WrongCat &primary);
		void makeSound() const;
		~WrongCat();		
};

#endif
