/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 01:40:09 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/30 12:17:49 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"SedLosers.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout<< "ERROR: 4 arguments required in this order:\n" << av[0] << " <file_name> <s1> <s2>" << std::endl;
		return (0);
	}
	SedLosers obj(av[1], av[2], av[3]);
	obj.run();
}
