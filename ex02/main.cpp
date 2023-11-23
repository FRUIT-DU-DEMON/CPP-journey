/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:55:30 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/23 16:46:14 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
#include"Brain.hpp"

// void fun()
// {
//     system("leaks brain");
// }


int main()
{
    // atexit(fun);
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
    
    Animal *arr[6];
    
    for (int i = 0; i < 6; i++)
    {
        if (i > 2)
            arr[i] = new Cat();
        else
            arr[i] = new Dog();
    }
    for (int i = 0; i < 6; i++)
        delete arr[i];

    return 0;
}