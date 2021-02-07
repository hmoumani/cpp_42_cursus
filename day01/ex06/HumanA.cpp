/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:50:25 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 15:50:27 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"



HumanA::HumanA(std::string name, Weapon& wep) : _name(name), _weapon(wep)
{
    std::cout << "humanA created" << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "humanA destroyed" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon& weapon)
{
    this->_weapon = weapon;
}