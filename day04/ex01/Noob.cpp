/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Noob.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 08:52:32 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/03 08:52:35 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Noob.hpp"

Noob::Noob() : Enemy(100, "Noob")
{
    std::cout << "let's Rool" << std::endl;
}

Noob::Noob(Noob const & src)
{
    *this = src;
    std::cout << "let's Rool" << std::endl;
}

Noob::~Noob()
{
    std::cout << "RIP" << std::endl;
}

void        Noob::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 10);
}

Noob&    Noob::operator=(Noob const & super) {
    Enemy* enemy = this;
    *enemy = super;
    return *this;
}
