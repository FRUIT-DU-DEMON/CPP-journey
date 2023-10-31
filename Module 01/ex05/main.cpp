/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:19:57 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/31 09:38:57 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"Harl.hpp"

int main()
{
    Harl client;

    client.complain("DEBUG");
    client.complain("INFO");
    client.complain("WARNING");
    client.complain("ERROR");
    client.complain("mustFail");
    return (0);
}