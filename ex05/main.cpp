/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 05:05:28 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/17 06:40:19 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl obj;
    std::string level;

    std::cout << "Please enter the level number" << std::endl;
    std::cin >> level;
    obj.complain(level);
    return (0);
}