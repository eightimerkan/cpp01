/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 05:05:55 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/17 07:23:22 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl
{
    public:
        void    complain(std::string level);
        Harl();
        ~Harl();

    private:
        void    debug();
        void    info();
        void    warning();
        void    error();
};