/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M4.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 08:52:18 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/03 08:52:20 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "M4.hpp"

M4::M4() : AWeapon("M4", 8, 50)
{
}

M4::M4(M4 const & src)
{
    *this = src;
}

M4::~M4()
{
}

void            M4::attack() const
{
    std::cout << "* TA TA Ta... *" << std::endl;
}

M4&    M4::operator=(M4 const & weapon) {
    AWeapon* awp = this;
    *awp = weapon;
    return *this;
}


