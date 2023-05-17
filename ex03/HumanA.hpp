/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:11:50 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/17 07:42:06 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
    void attack()const;
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    private:
    std::string name;
    Weapon& weapon;
};


#endif