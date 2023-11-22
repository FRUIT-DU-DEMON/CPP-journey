/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:55:30 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/22 19:40:21 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
#include"Brain.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
    
    return 0;
}