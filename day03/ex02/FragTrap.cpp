/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 10:40:52 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/26 10:40:54 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const std::string attacks[10]={"Medbot", "Senseless Sacrifice", "Rubber Ducky", "Blight Bot", "Shhhh... Trap!", "Mechromagician", "Funzerker", "Meat Unicycle", "Laser Inferno", "Gun Wizard"};

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target << " with melee, causing " << _melee_damage << " points of damage!" << std::endl;
}

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, "default", 30, 20, 5)
{
    srand((unsigned int)time(NULL));
    std::cout << "I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << std::endl;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
    srand((unsigned int)time(NULL));
    std::cout << "I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
    srand((unsigned int)time(NULL));
    std::cout << "I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "I can see... the code" << std::endl;
}

FragTrap    &FragTrap::operator=(FragTrap const & src)
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
    std::cout << "The copie will protect me. The copie will protect me." << std::endl;
    return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (_energy_points >= 25)
    {
        _energy_points -= 25;
        std::cout << "FR4G-TP <" << _name << "> attacks " << target << " using vaulthunter.exe " <<  attacks[rand() % 10] << std::endl;
        std::cout << _energy_points << "% remains" << std::endl;
    }
    else
    {
        std::cout << "let me get some F**king(freaking) rest" << std::endl;
        std::cout << "low energy: " << _energy_points << "%" << std::endl;
    }
}