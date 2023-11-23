/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:55:30 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/23 16:36:57 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
#include"Brain.hpp"

void fun()
{
    system("leaks brain");
}


int main()
{
    atexit(fun);
    /////// basic test of deep copy /////////
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
    /////// basic test of deep copy /////////
    
    Animal *arr[10];
    
    for (int i = 0; i < 10; i++)
    {
        if (i > 4)
            arr[i] = new Cat();
        else
            arr[i] = new Dog();
    }
    
    for (int i = 0; i < 10; i++)
        delete arr[i];
    
    
    return 0;
}