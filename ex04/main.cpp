/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 01:40:09 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/30 04:21:17 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include<cstdlib>


class SedIsForLosers {
	private :
		std::string input_file;
		std::string output_file;
		std::string s1;
		std::string s2;
	public :
		SedIsForLosers(std::string av1, std::string av2, std::string av3);
		void run();
};

SedIsForLosers::SedIsForLosers(std::string av1, std::string av2, std::string av3)
{
	this->input_file = av1;
	this->output_file = input_file + ".replace";
	this->s1 = av2;
	this->s2 = av3;
}

void SedIsForLosers::run()
{
	
}



int main()
{
	std::ifstream file("chiFile");
	std::string input;
	std::getline(file, input);
	std::getline(file, input);
	if (file.eof())
		std::cout<< "EOFEOFEOFEOF" << std::endl;
}