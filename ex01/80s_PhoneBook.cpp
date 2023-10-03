/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   80s_PhoneBook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:39:33 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/03 23:52:44 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"80s_PhoneBook.hpp"

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;

	public:
		void set_f_name(std::string field);
		void set_l_name(std::string field);
		void set_n_name(std::string field);
		void set_p_number(std::string field);
		void set_d_secret(std::string field);
		std::string get_f_name();
		std::string get_l_name();
		std::string get_n_name();
		std::string get_p_number();
		std::string get_d_secret();
		std::string pars_field(std::string field);
		int pars_input(std::string index);
};

class PhoneBook {
	private:
		Contact contacts_list[8];
	public:
		void run();
		
};

void PhoneBook::run()
{
	int index = 0;
	int fixed_index;
	int contact_index;
	std::string input;
	while (1)
	{
		std::cout<< ">>";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout<< "enter your contact's informations please!" << std::endl;
			std::getline(std::cin, input);
			contacts_list[index % 8].set_f_name(input);
			std::getline(std::cin, input);
			contacts_list[index % 8].set_l_name(input);
			std::getline(std::cin, input);
			contacts_list[index % 8].set_n_name(input);
			std::getline(std::cin, input);
			contacts_list[index % 8].set_p_number(input);
			std::getline(std::cin, input);
			contacts_list[index % 8].set_d_secret(input);
			index++;
		}
		if (input == "SEARCH")
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
			std::cout<< std::setw(10) << contacts_list[i].pars_field(contacts_list[i].get_f_name()) << "|";
			std::cout<< std::setw(10) << contacts_list[i].pars_field(contacts_list[i].get_l_name()) << "|";
			std::cout<< std::setw(10) << contacts_list[i].pars_field(contacts_list[i].get_n_name()) << "|";
			std::cout<< std::endl;
			std::cout<< "---------------------------------------------";
			std::cout<< std::endl;
			}
			std::cout<< "enter your contact's index please!" << std::endl;
			std::getline(std::cin, input);
			contact_index = atoi(input.c_str());
			if (contacts_list[index].pars_input(input) == 0 && contacts_list[contact_index].get_f_name() != "")
			{
				std::cout<< contacts_list[contact_index].get_f_name() << std::endl;
				std::cout<< contacts_list[contact_index].get_l_name() << std::endl;
				std::cout<< contacts_list[contact_index].get_n_name() << std::endl;
				std::cout<< contacts_list[contact_index].get_p_number() << std::endl;
				std::cout<< contacts_list[contact_index].get_d_secret() << std::endl;
			}
			else
				std::cout<< "chill man..you don't have a contact with this index" << std::endl;
				
		}
			
	}
		
}

void Contact::set_f_name(std::string field)
{
	this->first_name = field;
}

void Contact::set_l_name(std::string field)
{
	this->last_name = field;
}

void Contact::set_n_name(std::string field)
{
	this->nick_name = field;
}

void Contact::set_p_number(std::string field)
{
	this->phone_number = field;
}

void Contact::set_d_secret(std::string field)
{
	this->darkest_secret = field;
}

std::string Contact::get_f_name()
{
	return (this->first_name);
}

std::string Contact::get_l_name()
{
	return (this->last_name);
}

std::string Contact::get_n_name()
{
	return (this->nick_name);
}

std::string Contact::get_p_number()
{
	return (this->phone_number);
}

std::string Contact::get_d_secret()
{
	return (this->darkest_secret);
}

std::string Contact::pars_field(std::string field)
{
	for (int i = 0; field[i]; i++)
	{
		if (field[i] == '\t')
			field[i] = ' ';
	}
	if (field.length() > 10)
		return(field.substr(0, 9) + ".");
	return (field);
}

int Contact::pars_input(std::string index)
{
	for (int i = 0; index[i]; i++)
	{
		if (isdigit(index[i]) == 0)
		{
			std::cout<< "enter a valide index please!" << std::endl;
			return (1);
		}
	}
	if (index == "0")
		return (0);
	if (index.length() > 1 || atoi(index.c_str()) > 7 || atoi(index.c_str()) == 0)
	{
		std::cout<< "enter a valide index please!" << std::endl;
		return (1);
	}
	return (0);
}

int main()
{
	PhoneBook _80s_pb;
	_80s_pb.run();
}