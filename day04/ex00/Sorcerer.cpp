/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:37:49 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/28 10:37:51 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("None"), _title("")
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string const & name, std::string const & title) : _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
    *this = src;
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer&   Sorcerer::operator=(Sorcerer const & src)
{
    this->_name = src._name;
    this->_title = src._title;
    return *this;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string     Sorcerer::getName() const
{
    return this->_name;
}

std::string     Sorcerer::getTitle() const
{
    return this->_title;
}

void Sorcerer::polymorph(Victim const &src) const
{
    src.getPolymorphed();
}

std::ostream&	operator<<(std::ostream& out, Sorcerer const & src)
{
    return out << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
}
