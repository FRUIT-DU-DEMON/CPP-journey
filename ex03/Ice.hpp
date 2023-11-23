/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:46:50 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/23 23:53:32 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include"AMateria.hpp"
#include"ICharacter.hpp"


class Ice : public AMateria
{
    //
    public:
        Ice();
        Ice(const Ice &primary);
        Ice &operator=(const Ice &primary);
        Ice *clone() const;
        void use(ICharacter& target);
        ~Ice();
};

#endif
