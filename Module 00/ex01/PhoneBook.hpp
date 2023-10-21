/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 21:31:33 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/06 09:15:18 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include<iostream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include <cstdlib>

#include"Contact.hpp"

class PhoneBook {
	private:
		Contact contacts_list[8];
	public:
		std::string enter_infos(std::string field);
		std::string set_field(std::string field);
		int enter_index(std::string field);
		int pars_infos(std::string input);
		int pars_index(std::string index);
		void run();
		
};

#endif