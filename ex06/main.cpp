/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 05:05:28 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/17 06:52:11 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        std::string level = argv[1];
        Harl myobj;
        myobj.complain(level);
    }
    else
        std::cout << "Wrong arguman number ! " << std::endl;
    return (0);
}