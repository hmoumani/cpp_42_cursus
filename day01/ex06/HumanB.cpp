/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:50:46 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 15:50:48 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    std::cout << "humanB created" << std::endl;
}
HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "HumanB created" << std::endl;
}
HumanB::HumanB(std::string name, Weapon &wep) : _name(name), _weapon(&wep)
{
    std::cout << "HumanB created" << std::endl;
}
HumanB::~HumanB()
{
    std::cout << "HumanB destroyed" << std::endl;
}

void    HumanB::attack()
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}