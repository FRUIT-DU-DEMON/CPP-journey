/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:23:13 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/23 23:32:06 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Zombie.hpp"

void randomChump(std::string name)
{
	Zombie random_c(name);
	random_c.announce();
}
