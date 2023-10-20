/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:31:21 by hlabouit          #+#    #+#             */
/*   Updated: 2023/09/30 04:49:03 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		for (size_t j = 0; av[i][j]; j++)
			std::cout<< (char)toupper(av[i][j]);
	}
	std::cout<< "\n";
	return (0);
}
