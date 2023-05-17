/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:11:46 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/17 03:51:43 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
            {}

const std::string& Weapon::getType()const
{
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
