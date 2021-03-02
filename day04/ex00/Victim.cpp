/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:38:12 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/28 10:38:13 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(std::string const & name) : _name(name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
    *this = src;
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

std::string Victim::getName() const
{
    return this->_name;
}

Victim::~Victim()
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

void    Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

Victim	&Victim::operator=(Victim const & src)
{
    this->_name = src._name;
    return *this;
}

std::ostream	&operator<<(std::ostream& out_stream, Victim const & src)
{
    return out_stream << "I'm " << src.getName() << " and I like otters!" << std::endl;
}
