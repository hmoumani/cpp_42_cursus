/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:20:56 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:20:58 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
    for (int i = 0; i < 4; i++)
    {
        this->_list[i] = NULL;
    }
}

Character::Character(std::string const & name) : _name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->_list[i] = NULL;
    }
}

Character::Character(Character const & src)
{
    *this = src;
}

Character::~Character()
{
    clear();
}

Character   &Character::operator=(Character const &src)
{
    clear();
    _name = src._name;
    for (int i = 0; i < 4; i++)
    {
        if (src._list[i]) 
            _list[i] = src._list[i]->clone();
        else
            _list[i] = NULL;
    }
    return *this;
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_list[i] == NULL)
        {
            this->_list[i] = m;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    this->_list[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (!this->_list[idx])
        return ;
    this->_list[idx]->use(target);
}


void    Character::clear() {
    for (int i = 0; i < 4; i++) {
        if (_list[i]) {
            delete _list[i];
            _list[i] = NULL;
        }
    }
}