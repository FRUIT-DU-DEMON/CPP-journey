/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:55:30 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/22 18:07:46 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include<cstdlib>
#include<cmath>


class Brain {
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(const Brain &primary);
        Brain &operator=(const Brain &primary);
        ~Brain();
};



int main()
{

}