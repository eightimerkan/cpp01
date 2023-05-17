/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 05:05:58 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/17 07:57:34 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::complain(std:: string level)
{
    int tlevel = 0;
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

    while(tlevel < 4)
    {
        if(levels[tlevel] == level)
            break;
        tlevel++;
    }
    switch (tlevel)
    {
        case    0: 
            this->debug();
        case    1: 
            this->info();
        case    2: 
            this->warning();
        case    3: 
            this->error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void    Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    std::cout << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}