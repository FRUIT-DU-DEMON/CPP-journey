/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:48:26 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/23 23:53:24 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include"AMateria.hpp"
#include"ICharacter.hpp"

class Cure : public AMateria
{
    //
    public:
        Cure();
        Cure(const Cure &primary);
        Cure &operator=(const Cure &primary);
        Cure *clone() const;
        void use(ICharacter& target);
        ~Cure();
};

#endif
