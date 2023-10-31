/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:38:27 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/31 09:39:00 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Harl.hpp"

void Harl::debug()
{
    std::cout<< "DEBUG: This wine has a delightful aroma with hints of blackberry and oak. Simply exquisite!" << std::endl;
}

void Harl::info()
{
    std::cout<< "INFO: The wine's vintage is not up to the standard I expect. I demand a better selection." << std::endl;
}

void Harl::warning()
{
    std::cout<< "WARNING: My wine glass has not been properly cleaned. Please provide proper wine glasses." << std::endl;
}

void Harl::error()
{
    std::cout<< "ERROR: Wine has gone bad, musty taste detected." << std::endl;
}

void Harl::complain(std::string level)
{
    int which_case = 0;
    
    if (level == "DEBUG")
        which_case = 1;
    else if (level == "INFO")
        which_case = 2;
    else if (level == "WARNING")
        which_case = 3;
    else if (level == "ERROR")
        which_case = 4;
    else
    {
        std::cout<< "invalid level!" << std::endl;
        return;
    }
    switch (which_case) {
        case 1:
            this->pointer_to = &Harl::debug;
            break;
        case 2:
            this->pointer_to = &Harl::info;
            break;
        case 3:
            this->pointer_to = &Harl::warning;
            break;
        case 4:
            this->pointer_to = &Harl::error;
            break;
    }
    (this->*pointer_to)();
}
