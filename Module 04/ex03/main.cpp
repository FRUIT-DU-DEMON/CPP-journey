/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:33:13 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/24 16:42:41 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"
#include"Character.hpp"
#include"Cure.hpp"
#include"Ice.hpp"
#include"MateriaSource.hpp"

// void l()
// {
//     system("leaks interaface");
// }

int main()
{
    // atexit(l);
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    
    // Character* tst = new Character("tst");
    // AMateria* tmp_tst;
    // tmp_tst = src->createMateria("ice");
    // tst->equip(tmp_tst);
    // tmp_tst = src->createMateria("cure");
    // tst->equip(tmp_tst);
    
    // Character *CAO_test = new Character("template");
    // *CAO_test = *tst;
    // CAO_test->use(0, *tst);
    // CAO_test->use(1, *tst);
    
    // me->unequip(1);

    delete bob;
    delete me;
    delete src;
    // delete tmp;
    
    // delete tst;
    // delete CAO_test;
    
    return 0;
}