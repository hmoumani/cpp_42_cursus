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

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_vec.size() + std::distance(begin, end) > this->_n)
        throw std::exception();
    this->_vec.insert(this->_vec.end(), begin, end);
}

std::vector<int>::iterator Span::begin()
{
    return _vec.begin();
}

std::vector<int>::iterator Span::end()
{
    return _vec.end();
}

int                         Span::longestSpan()
{
    if (_vec.size() <= 1)
        throw std::exception();
    return ((*std::max_element(_vec.begin(), _vec.end())) - (*std::min_element(_vec.begin(), _vec.end())));
}

int                             Span::shortestSpan()
{
    if (_vec.size() <= 1)
        throw std::exception();
    int min = INT_MAX;
    std::vector<int> cp(_vec);
    std::sort(cp.begin(), cp.end());
    std::vector<int>::iterator prev = cp.begin();
    for (std::vector<int>::iterator it = cp.begin() + 1, last = cp.end(); it != last; it++)
    {
        if (std::abs(*it - *prev) < min)
            min = std::abs(*it - *prev);
        prev = it;
    }
    return min;
}