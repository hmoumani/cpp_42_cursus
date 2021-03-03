/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:19:50 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:19:52 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria() : _type(""), _xp(0)
{
}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
}

AMateria    &AMateria::operator=(AMateria const & src)
{
    this->_xp = src._xp;
    return *this;
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

unsigned int AMateria::getXP() const
{
    return this->_xp;
}

void AMateria::use(ICharacter &)
{
    this->_xp += 10;
}

