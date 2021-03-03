/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:21:29 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:21:33 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0;i < 4; i++)
    {
        _list[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++) {
        if (_list[i])
            delete _list[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const & src) {
    for (int i = 0; i < 4; i++)
    {
        _list[i] = NULL;
    }
    *this = src;
}

MateriaSource&      MateriaSource::operator=(MateriaSource const & materiaSource) {
    for (int i = 0; i < 4; i++)
    {
        if (_list[i])
        {
            delete _list[i];
        }
        if (materiaSource._list[i])
        {
            _list[i] = materiaSource._list[i]->clone();
        }
        else
        {
            _list[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *src)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_list[i])
        {
            _list[i] = src;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_list[i] && _list[i]->getType() == type)
        {
            return (this->_list[i]->clone());
        }
    }
    return NULL;
}