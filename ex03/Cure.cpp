/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:56:21 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/23 21:04:47 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure()
{
    this->name = "cure";
}

Cure::Cure(const Cure &primary) : AMateria(primary)
{
    *this = primary;
}

Cure &Cure::operator=(const Cure &primary)
{
    if (this != &primary)
        AMateria::operator=(primary);
    return (*this);
}

Cure::~Cure()
{
    
}