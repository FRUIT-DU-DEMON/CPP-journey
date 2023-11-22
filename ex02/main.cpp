/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:55:30 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/22 19:16:38 by hlabouit         ###   ########.fr       */
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

Brain::Brain()
{
    std::cout<< "Class Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &primary)
{
    std::cout<< "Class Brain copy constructor called" << std::endl;
	*this = primary;
}

Brain &Brain::operator=(const Brain &primary)
{
    std::cout<< "Class Brain copy assignment operator called" << std::endl;
    if (this != &primary)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = primary.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout<< "Class Brain destructor called" << std::endl;
}



int main()
{

}