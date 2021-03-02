/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:15:37 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:15:38 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
    *this = src;
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void        SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}

SuperMutant&    SuperMutant::operator=(SuperMutant const & super) {
    Enemy* enemy = this;
    *enemy = super;
    return *this;
}
