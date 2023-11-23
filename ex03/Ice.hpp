/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:46:50 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/23 21:00:42 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include"AMateria.hpp"

class Ice : public AMateria
{
    //
    public:
        Ice();
        Ice(const Ice &primary);
        Ice &operator=(const Ice &primary);
        ~Ice();
};

#endif
