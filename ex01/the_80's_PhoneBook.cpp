/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_80's_PhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:14:30 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/06 09:19:48 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

void PhoneBook::run()
{
	int	index = 0;
	int	fixed_index;
	int	valide_index;
	std::string	input;
	
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

int main()
{
	PhoneBook _80s_pb;
	_80s_pb.run();
}
