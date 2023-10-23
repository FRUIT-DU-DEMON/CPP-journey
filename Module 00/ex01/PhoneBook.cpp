/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:39:33 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/23 01:42:17 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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

void PhoneBook::run()
{
	int	index = 0;
	int	fixed_index;
	int	valide_index;
	std::string	input;
	
	std::cout<< std::endl << "•••••••••••••••••••••••••••• WELCOME TO THE 80's ERA ••••••••••••••••••••••••••••" << std::endl;
	std::cout<< "➜ HERE'S YOUR PHONEBOOK MANUAL: " << std::endl;
	std::cout<< "ADD: TO ADD A CONTACT TO YOUR PHONEBOOK " << std::endl;
	std::cout<< "SEARCH: TO GET YOUR CONTACT'S DETAILS " << std::endl;
	std::cout<< "EXIT: TO QUIT YOUR PHONEBOOK " << std::endl;
	while (1)
	{
		std::cout<< "➜ ";
		if (!getline(std::cin, input))
			exit(0);
		if (input == "ADD")
		{
			std::cout<< "add your contact's informations please ⤸" << std::endl;
			contacts_list[index % 8].set_f_name(this->enter_infos("first name: "));
			contacts_list[index % 8].set_l_name(this->enter_infos("last name: "));
			contacts_list[index % 8].set_n_name(this->enter_infos("nickname: "));
			contacts_list[index % 8].set_p_number(this->enter_infos("phone number: "));
			contacts_list[index % 8].set_d_secret(this->enter_infos("darkest secret: "));
			index++;
		}
		else if (input == "SEARCH")
		{
			if (index % 8 != index)
				fixed_index = 8;
			else
				fixed_index = index; 
			std::cout<< std::endl;
			std::cout<< "--------------- CONTACT'S LIST --------------";
			std::cout<< std::endl;
			std::cout<< "|" << std::setw(10) << "index" << "|";
			std::cout<< std::setw(10) << "first name" << "|";
			std::cout<< std::setw(10) << "last name" << "|";
			std::cout<< std::setw(10) << "nickname" << "|";
			std::cout<< std::endl;
			std::cout<< "---------------------------------------------";
			std::cout<< std::endl;
			for (int i = 0; i < fixed_index; i++)
			{
			std::cout<< "|" << std::setw(10) << i << "|";
			std::cout<< std::setw(10) << this->set_field(contacts_list[i].get_f_name()) << "|";
			std::cout<< std::setw(10) << this->set_field(contacts_list[i].get_l_name()) << "|";
			std::cout<< std::setw(10) << this->set_field(contacts_list[i].get_n_name()) << "|";
			std::cout<< std::endl;
			std::cout<< "---------------------------------------------";
			std::cout<< std::endl;
			}
			std::cout<< "enter your contact's index please ⤸" << std::endl;
			valide_index = this->enter_index("index: ");
			if (contacts_list[valide_index].get_f_name() != "")
			{
				std::cout<< "first name: " << contacts_list[valide_index].get_f_name() << std::endl;
				std::cout<< "laste name: " << contacts_list[valide_index].get_l_name() << std::endl;
				std::cout<< "nickname: " << contacts_list[valide_index].get_n_name() << std::endl;
				std::cout<< "phone number: " << contacts_list[valide_index].get_p_number() << std::endl;
				std::cout<< "darkest secret: " << contacts_list[valide_index].get_d_secret() << std::endl;
			}
		}
		else if (input == "EXIT")
		{
			std::cout << "•••••••••••••••••••••••••••••••• UNTIL NEXT TIME ••••••••••••••••••••••••••••••••" << std::endl;
			break;
		}
		else
			std::cout << "✖︎ enter a valide command please!" << std::endl;
	}

}
