/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:39:51 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/24 13:47:47 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria()
{
    this->name = "unknown";
}

AMateria::AMateria(const AMateria &primary)
{
    *this = primary;
}

AMateria &AMateria::operator=(const AMateria &primary)
{
    if (this != &primary)
        this->name = primary.name;
    return (*this);
}

AMateria::AMateria(std::string const & type)
{
    this->name = type;
}

std::string const &AMateria::getType() const
{
    return (this->name);
}

void AMateria::use(ICharacter& target)
{
    std::cout<< "use of AMateria called with " << target.getName() << std::endl;
}


AMateria::~AMateria()
{

}