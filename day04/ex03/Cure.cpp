/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:20:32 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:20:34 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
    *this = src;
}

Cure::~Cure()
{
}

Cure    &Cure::operator=(Cure const & src)
{
    AMateria::operator=(src);
    return *this;
}

Cure* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    AMateria::use(target);
}
