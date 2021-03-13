/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:14:47 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/13 12:14:49 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(Span const & src)
{
    *this = src;
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::~Span()
{

}

Span    &Span::operator=(Span const & src)
{
    _n = src._n;
    _vec = src._vec;
    return *this;
}

void    Span::addNumber(int number)
{
    if (_vec.size() >= this->_n)
        throw std::exception();
    _vec.push_back(number);
}

void    Span::addNumber(std::vector<int> & src)
{
    if (_vec.size() + src.size() >= this->_n)
        throw std::exception();
    this->_vec.insert(this->_vec.end(), src.begin(), src.end());
}

std::vector<int>::iterator Span::begin()
{
    return _vec.begin();
}

std::vector<int>::iterator Span::end()
{
    return _vec.end();
}