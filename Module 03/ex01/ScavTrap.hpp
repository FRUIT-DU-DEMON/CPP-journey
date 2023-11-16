/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:28:49 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/16 01:30:15 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include"ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
    public :
        ScavTrap();
        ScavTrap(const ScavTrap &primary);
        ScavTrap &operator=(const ScavTrap &primary);
        ScavTrap(const std::string &which_name);
		void attack(const std::string &target);
        void guardGate();
        ~ScavTrap();
};

#endif
