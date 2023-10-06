/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   80s_PhoneBook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:39:33 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/06 05:04:54 by hlabouit         ###   ########.fr       */
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
};

class PhoneBook {
	private:
		Contact contacts_list[8];
	public:
		std::string enter_infos(std::string field);
		int pars_infos(std::string input);
		std::string set_field(std::string field);
		int enter_index(std::string field);
		int pars_index(std::string index);
		void run();
		
};

void PhoneBook::run()
{
	int index = 0;
	int fixed_index;
	int valide_index;
	std::string input;
	while (1)
	{
		std::cout<< ">> ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout<< "enter your contact's informations please!" << std::endl;
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
			std::cout<< "enter your contact's index please!" << std::endl;
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
			break;
		else
			std::cout << "enter a valide command please!" << std::endl;
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


int PhoneBook::pars_infos(std::string input)
{
	int flag = 0;
	int i = 0;
	
	if (input.empty())
	{
		std::cout<< "your contact can't have an empty field." << std::endl;
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
		std::cout<< "your contact can't have an empty field." << std::endl;
		return (1);
	}
	return (0);
}

std::string PhoneBook::enter_infos(std::string field)
{
	std::string input;
	std::cout<< field;
	std::getline(std::cin, input);
	
	while (this->pars_infos(input) == 1)
	{
		std::cout<< field;
		std::getline(std::cin, input);
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
		return(field.substr(0, 9) + ".");
	return (field);
}

int PhoneBook::pars_index(std::string index)
{
	for (int i = 0; index[i]; i++)
	{
		if (isdigit(index[i]) == 0)
		{
			std::cout<< "enter a valide index please!" << std::endl;
			return (1);
		}
	}
	if (index.length() > 1 || atoi(index.c_str()) > 7 || index.empty())
	{
		std::cout<< "enter a valide index please!" << std::endl;
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
	
	std::cout<< field;
	std::getline(std::cin, input);
	while (this->pars_index(input) == 1)
	{
		std::cout<< field;
		std::getline(std::cin, input);
	}
	valide_index = atoi(input.c_str());
	if (contacts_list[valide_index].get_f_name() == "")
		std::cout<< "you don't have a contact with this index!" << std::endl;
	return (valide_index);
}

int main()
{
	PhoneBook _80s_pb;
	_80s_pb.run();
}