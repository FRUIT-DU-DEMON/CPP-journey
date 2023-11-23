/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:19:58 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/23 23:27:36 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character &primary)
{
    *this = primary;
}

Character &Character::operator=(const Character &primary)
{
    if (this != &primary)
    {
        this->name = primary.name;
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            this->inventory[i] = primary.inventory[i]->clone();
        }
    }
    return (*this);
}

Character::Character(const std::string &which_name)
{
    this->name = which_name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL && m != NULL)
        {
            this->inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx > 0 && idx < 4)
    {
        this->inventory[idx] = NULL;
    }
}

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 0 && idx < 4 && this->inventory[idx])
    {
        this->inventory[idx]->use(target);
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->inventory[i];
}