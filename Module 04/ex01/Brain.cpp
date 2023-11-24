/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:26:56 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/22 19:29:36 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

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
