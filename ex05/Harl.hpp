/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:37:07 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/31 09:38:07 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HARL_H
# define HARL_H

#include<fstream>            
#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include <cstdlib>

class Harl {
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public :
        void complain(std::string level);
        void (Harl::*pointer_to)();
};

#endif
