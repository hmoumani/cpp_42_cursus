/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 12:02:14 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/27 12:02:16 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(100, 100, 120, 120, 1, "default", 60, 20, 5)
{
    std::cout << "Super Trap created" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "Super Trap deleted" << std::endl;
}

SuperTrap::SuperTrap(std::string const & name) : ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5)
{
    std::cout << "Super Trap created" << std::endl;
}

void    SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}

void    SuperTrap::meleeAttack(std::string const & target)
{
    FragTrap::meleeAttack(target);
}

SuperTrap    &SuperTrap::operator=(SuperTrap const & src)
{
    _hit_point = src._hit_point;
    _max_hit_point = src._max_hit_point;
    _energy_points = src._energy_points;
    _max_energy_points = src._max_energy_points;
    _level = src._level;
    _name = src._name;
    _melee_damage = src._melee_damage;
    _ranged_attack_damage = src._ranged_attack_damage;
    _armor_damage = src._armor_damage;
    std::cout << "copie created" << std::endl;
    return *this;
}