/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedLosers.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:05:39 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/30 12:07:28 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef SEDLOSERS_H
# define SEDLOSERS_H

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

class SedLosers {
	private :
		std::string reading_file;
		std::string writing_file;
		std::string s1;
		std::string s2;
	public :
		SedLosers(std::string av1, std::string av2, std::string av3);
		void parsing(std::ifstream &input, std::ofstream &output);
		void run();
};

#endif
