/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 10:37:46 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/27 10:37:47 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, "default", 60, 5, 0)
{
    srand((unsigned int)time(NULL));
    std::cout << "Alright, Let's Go Conquer This World!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const & name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
    srand((unsigned int)time(NULL));
    std::cout << "Alright, Let's Go Conquer This World!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
    srand((unsigned int)time(NULL));
    std::cout << "Alright, Let's Go Conquer This World!" << std::endl;
    *this = src;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NINJA RIP!" << std::endl;
}

NinjaTrap    &NinjaTrap::operator=(NinjaTrap const & src)
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
    std::cout << "kage bunshin no jutsu!" << std::endl;
    return *this;
}

void    NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	std::cout << "<" << _name << "> uses ninjaShoebox on NinjaTrap <" << target.getName() << "> : for Robolution i'll kill my self!" << std::endl;
}

void    NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
	std::cout << "<" << _name << "> uses ninjaShoebox on ClapTrap <" << target.getName() << "> : How do YOU like target practice? Huh? HUH?!" << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	std::cout << "<" << _name << "> uses ninjaShoebox on FragTrap <" << target.getName() << "> : WOO! Sucks to be a fleshie!" << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	std::cout << "<" << _name << "> uses ninjaShoebox on ScavTrap <" << target.getName() << "> : Another fleshbag falls to the Robolution!" << std::endl;
}

std::string NinjaTrap::getName() const
{
    return this->_name;
}

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "Ninja-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "Ninja-TP " << _name << " attacks " << target << " with melee, causing " << _melee_damage << " points of damage!" << std::endl;
}
