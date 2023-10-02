/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   80s_PhoneBook.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 21:31:33 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/02 09:08:56 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _80S_PHONEBOOK_H
# define _80S_PHONEBOOK_H

#include<iostream>
#include<string>

class Contact {
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
};

class PhoneBook {
	public:
		Contact contacts[8];
		void fill_data(std::string field);
};






#endif