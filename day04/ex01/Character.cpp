/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:13:58 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:14:02 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name(""), _ap(40), _wp(NULL)
{}

Character::Character(std::string const & name) : _name(name), _ap(40), _wp(NULL)
{}

Character::Character(Character const & src)
{
    *this = src;
}

Character::~Character()
{
}

Character   &Character::operator=(Character const & src)
{
    this->_ap = src._ap;
    this->_name = src._name;
    this->_wp = src._wp;
    return *this;
}

void Character::recoverAP()
{
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
}

void Character::equip(AWeapon *wp)
{
    this->_wp = wp;
}

void Character::attack(Enemy *enemy)
{
    if (_ap < 10 || _wp == NULL)
        return ;
    std::cout << this->_name << " attakcs " << enemy->getType() << " with a " << this->_wp->getName() << std::endl;
    this->_wp->attack();
    enemy->takeDamage(_wp->getDamage());
    this->_ap -= _wp->getAPCost();
    if (this->_ap < 0)
        this->_ap = 0;
    if (enemy->getHP() <= 0)
        delete enemy;
}

std::string const & Character::getName() const
{
    return this->_name;
}

AWeapon		*Character::getWeapon() const
{
    return _wp;
}

int          Character::getAp() const
{
    return this->_ap;
}

std::ostream&       operator<<(std::ostream& out, Character const & character)
{
    AWeapon *wp = character.getWeapon();
    if (wp)
        return out << character.getName() << " has " << character.getAp() << " AP wields a " << wp->getName() << std::endl;
    else
        return out << character.getName() << " has " << character.getAp() << " AP and is unarmed" << std::endl;
}
