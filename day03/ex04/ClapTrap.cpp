/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:12:55 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/26 18:12:58 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "My assets... frozen!" << std::endl;
    _hit_point -= amount - (amount * _armor_damage / 100);
    if (_hit_point < 0)
        _hit_point = 0;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Sweet life juice!" << std::endl;
    _hit_point += amount;
    if (_hit_point > _max_hit_point)
        _hit_point = _max_hit_point;
}

ClapTrap::ClapTrap() : _hit_point(100), _max_hit_point(100),
_energy_points(50), _max_energy_points(50), _level(1), _name("default"), _melee_damage(20), 
_ranged_attack_damage(15), _armor_damage(3)
{
    srand((unsigned int)time(NULL));
    std::cout << "ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap(int hit_point, int max_hit_point, int energy_points,
        int max_energy_points, int level, std::string name,
        int melee_damage, int ranged_attack_damage, int armor_damage) : _hit_point(hit_point), _max_hit_point(max_hit_point),
_energy_points(energy_points), _max_energy_points(max_energy_points), _level(level), _name(name), _melee_damage(melee_damage), 
_ranged_attack_damage(ranged_attack_damage), _armor_damage(armor_damage)
{
    srand((unsigned int)time(NULL));
    std::cout << "ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    srand((unsigned int)time(NULL));
    std::cout << "ClapTrap constructor" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor" << std::endl;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}