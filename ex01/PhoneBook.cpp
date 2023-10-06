/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:39:33 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/06 09:15:47 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

int PhoneBook::pars_infos(std::string input)
{
	int flag = 0;
	int i = 0;

	if (input.empty())
	{
		std::cout<< "✖︎ your contact can't have an empty field!" << std::endl;
		return (1);
	}	
	while (input[i])
	{
		if (input[i] != ' ' && input[i] != '\t')
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0)
	{
		std::cout<< "✖︎ your contact can't have an empty field!" << std::endl;
		return (1);
	}
	return (0);
}

std::string PhoneBook::enter_infos(std::string field)
{
	std::string input;
	std::cout<< field;

	if (!getline(std::cin, input))
		exit (0);
	while (this->pars_infos(input) == 1)
	{
		std::cout<< field;
		if (!getline(std::cin, input))
			exit(0);
	}
	return (input);
}

std::string PhoneBook::set_field(std::string field)
{
	for (int i = 0; field[i]; i++)
	{
		if (field[i] == '\t')
			field[i] = ' ';
	}
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	return (field);
}

int PhoneBook::pars_index(std::string index)
{
	for (int i = 0; index[i]; i++)
	{
		if (isdigit(index[i]) == 0)
		{
			std::cout<< "✖︎ enter a valide index please!" << std::endl;
			return (1);
		}
	}
	if (index.length() > 1 || atoi(index.c_str()) > 7 || index.empty())
	{
		std::cout<< "✖︎ enter a valide index please!" << std::endl;
		return (1);
	}
	if (index == "0")
		return (0);
	return (0);
}

int PhoneBook::enter_index(std::string field)
{
	std::string input;
	int valide_index;

	std::cout << field;
	if (!getline(std::cin, input))
		exit(0);
	while (this->pars_index(input) == 1)
	{
		std::cout<< field;
		if (!getline(std::cin, input))
			exit(0);
	}
	valide_index = atoi(input.c_str());
	if (contacts_list[valide_index].get_f_name() == "")
		std::cout<< "✖︎ you don't have a contact with this index!" << std::endl;
	return (valide_index);
}
