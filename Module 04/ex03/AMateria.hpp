/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:44:51 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/24 13:50:00 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include<cstdlib>
#include<cmath>

#include"ICharacter.hpp"

class ICharacter;

class AMateria {
    protected:
        std::string name;
    public:
        AMateria();
        AMateria(const AMateria &primary);
        AMateria &operator=(const AMateria &primary);
        AMateria(std::string const & type);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        virtual ~AMateria();
};

#endif