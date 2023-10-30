/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 01:40:09 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/30 11:58:08 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>


class SedIsForLosers {
	private :
		std::string reading_file;
		std::string writing_file;
		std::string s1;
		std::string s2;
	public :
		SedIsForLosers(std::string av1, std::string av2, std::string av3);
		void parsing(std::ifstream &input, std::ofstream &output);
		void run();
};

SedIsForLosers::SedIsForLosers(std::string av1, std::string av2, std::string av3)
{
	this->reading_file = av1;
	this->writing_file = reading_file + ".replace";
	this->s1 = av2;
	this->s2 = av3;
}

void SedIsForLosers::parsing(std::ifstream &input, std::ofstream &output)//streams cant be passed as a copy
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

void SedIsForLosers::run()
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
		while (position != std::string::npos)
		{
			buffer1 = line.substr(0, position);
			buffer2 = line.substr(position + this->s1.length(), line.length());
			line = buffer1 + this->s2 + buffer2;
			position = line.find(this->s1);
			flag = 777;
		}
		output<< line;
	}
	if (flag == 404)
		std::cout<< "<" << this->s1 << "> doesn't exist within the file <" << this->reading_file << ">!" <<std::endl;
	else
		std::cout<< "every occurrence of <" << this->s1 << "> was replaced with <" << this->s2 << ">!" <<std::endl;
	input.close();
	output.close();
}



int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout<< "ERROR: 4 arguments required in this order:\n" << av[0] << " <file_name> <s1> <s2>" << std::endl;
		return (0);
	}
	SedIsForLosers obj(av[1], av[2], av[3]);
	obj.run();
}