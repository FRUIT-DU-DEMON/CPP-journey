/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   80s_PhoneBook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:39:33 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/02 17:15:16 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"80s_PhoneBook.hpp"
#include<iomanip>

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
		void run();
		
};



void PhoneBook::run()
{
	int index = 0;
	std::string input;
	while (1)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
		{	
			std::cout<< "set your fields please !" << std::endl;
			if (index > 7)
				index = 0;
			std::getline(std::cin, input);
			contacts_list[index].set_f_name(input);
			std::getline(std::cin, input);
			contacts_list[index].set_l_name(input);
			std::getline(std::cin, input);
			contacts_list[index].set_n_name(input);
			std::getline(std::cin, input);
			contacts_list[index].set_p_number(input);
			std::getline(std::cin, input);
			contacts_list[index].set_d_secret(input);
			index++;
		}
		if (input == "SEARCH")
		{
			if (index > 7)
				index = 7;
			for (int i = 0; i <= 8; i++)
			{
				std::cout<< "|" << std::setw(10)  << contacts_list[in] << "|"<< std::endl;
				std::cout<< "|gayoodfgh.|          |          |          |" << std::endl;
				std::cout<< "|__________|__________|__________|__________|" << std::endl;
			}
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


int main()
{
	std::cout<< "|" << std::setw(10)  << "" << "|"<< std::endl;
	exit(0);
	PhoneBook _80s_pb;
	_80s_pb.run();
}