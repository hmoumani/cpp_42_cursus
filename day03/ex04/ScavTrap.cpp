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

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, "default", 20, 15, 3)
{
    srand((unsigned int)time(NULL));
    std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
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

}

std::string ScavTrap::getName() const
{
    return this->_name;
}
