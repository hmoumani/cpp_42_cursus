/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:54:28 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/26 16:54:37 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const std::string attacks[3]={"Don't ask me where this ammo's coming from!", "If I had veins, they'd be popping out right now!", "It's time to phase you suckers out!"};

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "Can't touch this!" << std::endl;
    std::cout << "Scav Trap " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Take that!" << std::endl;
    std::cout << "Scav Trap " << _name << " attacks " << target << " with melee, causing " << _melee_damage << " points of damage!" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "My assets... frozen!" << std::endl;
    _hit_point -= amount - (amount * _armor_damage / 100);
    if (_hit_point < 0)
        _hit_point = 0;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "Sweet life juice!" << std::endl;
    _hit_point += amount;
    if (_hit_point > _max_hit_point)
        _hit_point = _max_hit_point;
}

ScavTrap::ScavTrap() : _hit_point(100), _max_hit_point(100),
_energy_points(50), _max_energy_points(50), _level(1), _name("default"), _melee_damage(20), 
_ranged_attack_damage(15), _armor_damage(3)
{
    srand((unsigned int)time(NULL));
    std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : _hit_point(100), _max_hit_point(100),
_energy_points(50), _max_energy_points(50), _level(1), _name(name), _melee_damage(20), 
_ranged_attack_damage(15), _armor_damage(3)
{
    srand((unsigned int)time(NULL));
    std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    srand((unsigned int)time(NULL));
    std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Are you god? Am I dead?" << std::endl;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const & src)
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
    std::cout << "This time it'll be awesome, I promise!" << std::endl;
    return *this;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{

    std::cout << "ScavTrap <" << _name << "> attacks " << target << " using challengeNewcomer " <<  attacks[rand() % 3] << std::endl;
    std::cout << _energy_points << "% remains" << std::endl;

}