/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedLosers.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:08:24 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/19 13:41:53 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"SedLosers.hpp"

SedLosers::SedLosers(std::string av1, std::string av2, std::string av3)
{
	this->reading_file = av1;
	this->writing_file = reading_file + ".replace";
	this->s1 = av2;
	this->s2 = av3;
}

void SedLosers::parsing(std::ifstream &input, std::ofstream &output)//streams cant be passed as a copy
{
	if (!input.is_open() || !output.is_open())
	{
		std::cout<< "ERROR: failed to open one or both files!" << std::endl;
		exit(1);
	}
	if (this->reading_file.empty() || this->s1.empty() || this->s2.empty())
	{
		std::cout<< "ERROR: all arguments must be filed!" << std::endl;
		exit(1);
	}
}

void SedLosers::run()
{
	std::ifstream input(this->reading_file.c_str());
	std::ofstream output(this->writing_file.c_str());
	std::string line = "";
	std::string buffer1 = "";
	std::string buffer2 = "";
	int flag = 404;
	size_t position;

	parsing(input, output);
	while(std::getline(input, line))
	{
		position = line.find(this->s1);
		while (position != std::string::npos)//npos is a static member constant of the std::string class
		//It represents the maximum value for the size_t data type
		{
			buffer1 = line.substr(0, position);
			buffer2 = line.substr(position + this->s1.length(), line.length());
			line = buffer1 + this->s2 + buffer2;
			position = line.find(this->s1);
			flag = 777;
		}
		if (input.eof())
			output<< line;
		else
			output<< line << std::endl;
	}
	if (flag == 404)
		std::cout<< "<" << this->s1 << "> doesn't exist within the file <" << this->reading_file << ">!" <<std::endl;
	else
		std::cout<< "every occurrence of <" << this->s1 << "> was replaced with <" << this->s2 << ">!" <<std::endl;
	input.close();
	output.close();
}
