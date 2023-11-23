/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:34:53 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/23 23:48:38 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->Materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &primary)
{
    *this = primary;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &primary)
{
    if (this != &primary)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->Materias[i])
                delete this->Materias[i];
            this->Materias[i] = primary.Materias[i]->clone();
        }
    }
    return (*this);
}


void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Materias[i] == NULL)
        {
            this->Materias[i] = m;
            break;   
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Materias[i] && this->Materias[i]->getType() == type)
            return (this->Materias[i]->clone());
    }
    return (0);
}


MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->Materias[i];
}