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

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target << " with melee, causing " << _melee_damage << " points of damage!" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
    _hit_point -= amount - (amount * 5 / 100);
    if (_hit_point < 0)
        _hit_point = 0;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "Good as new, I think. Am I leaking?" << std::endl;
    _hit_point += amount;
    if (_hit_point > 100)
        _hit_point = 100;
}

FragTrap::FragTrap()
{
    std::cout << "I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "I can see... the code" << std::endl;
}

FragTrap    &FragTrap::operator=(FragTrap const & src)
{
    std::cout << "The copie will protect me. The copie will protect me." << std::endl;
    return *this;
}
