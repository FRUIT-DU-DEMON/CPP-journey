/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 01:53:54 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/24 16:42:52 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Zombie.hpp"

int main()
{
	int N = 13;
	std::string name = "run_dumbass";
	if (N > 0)
	{
		Zombie *zombiizz = zombieHorde(N, name);
		for (int i = 0; i < N; i++)
			zombiizz[i].announce();
		delete[] zombiizz;
	}
	return (0);
}
