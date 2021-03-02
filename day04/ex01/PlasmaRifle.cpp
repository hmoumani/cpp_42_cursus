/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:14:51 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:14:53 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}


PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
    *this = src;
}

PlasmaRifle::~PlasmaRifle()
{
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle&    PlasmaRifle::operator=(PlasmaRifle const & weapon)
{
    AWeapon* awp = this;
    *awp = weapon;
    return *this;
}
