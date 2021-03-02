/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:38:31 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/28 10:38:34 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string const & name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src)
{
    *this = src;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon&   Peon::operator=(Peon const & src)
{
    this->_name = src._name;
    return *this;
}

void    Peon::getPolymorphed() const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
