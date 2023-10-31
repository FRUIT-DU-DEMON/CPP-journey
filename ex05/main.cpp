/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:19:57 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/31 06:43:02 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include<fstream>            
#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include <cstdlib>


class Harl {
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public :
        void complain(std::string level);
};

void Harl::debug()
{
    std::cout<< "DEBUG: This wine has a delightful aroma with hints of blackberry and oak. Simply exquisite!" << std::endl;
}

void Harl::info()
{
    std::cout<< "INFO: The wine's vintage is not up to the standard I expect. I demand a better selection." << std::endl;
}

void Harl::warning()
{
    std::cout<< "WARNING: My wine glass has not been properly cleaned. Please provide proper wine glasses." << std::endl;
}

void Harl::error()
{
    std::cout<< "ERROR: Wine has gone bad, musty taste detected." << std::endl;
}

void Harl::complain(std::string level)
{
}


int main()
{ 
    
}