/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:42:37 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/24 16:42:55 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombizz = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombizz[i].set_name(name);
	return (zombizz);
}
