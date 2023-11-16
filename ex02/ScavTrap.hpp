/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:34:28 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/16 03:34:48 by hlabouit         ###   ########.fr       */
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
