/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:56:19 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/24 22:25:11 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include <cstdlib>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout<< &str << std::endl;
    std::cout<< stringPTR << std::endl;
    std::cout<< &stringREF << std::endl;

    std::cout<< str << std::endl;
    std::cout<< *stringPTR << std::endl;
    std::cout<< stringREF << std::endl;
}
