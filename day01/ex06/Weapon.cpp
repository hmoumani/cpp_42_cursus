/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:50:01 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 15:50:02 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Weapon created" << std::endl;
}
Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon created" << std::endl;
}
Weapon::~Weapon()
{
    std::cout << "Weapon destroyed" << std::endl;
}
const std::string&  Weapon::getType() const
{
    return this->_type;
}
void                Weapon::setType(std::string type)
{
    this->_type = type;
}