/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:31:14 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/23 23:41:01 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include"IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria *Materias[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &primary);
        MateriaSource &operator=(const MateriaSource &primary);
        void learnMateria(AMateria*m);
        AMateria* createMateria(std::string const & type);
        ~MateriaSource();
};

#endif