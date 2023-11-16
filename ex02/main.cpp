/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:45:09 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/16 03:53:33 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(const FragTrap &primary);
        FragTrap &operator=(const FragTrap &primary);
        FragTrap(const std::string &which_name);
        void highFivesGuys(void);
        ~FragTrap();
};




int main()
{
    
}