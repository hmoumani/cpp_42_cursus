/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:05:58 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/12 17:06:00 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>

template <typename T>
class Array
{
    private:
        size_t _size;
        T   *_list;
    public:
        Array<T>() : _size(0), _list(NULL)
        {
            _list = new T[_size]();
        };
        Array<T>(unsigned int n) : _size(n)
        {
            this->_list = new T[n];
            for (unsigned int i = 0; i < n; i++)
            {
                _list[i] = 0;
            }
        };
        Array<T>(const Array<T> &src) : _list(NULL)
        {
            *this = src;
        };
        ~Array<T>()
        {
            if (_list)
                delete[] _list;
        };
        T &operator[](size_t i) const
        {
            if (i < 0 || i >= _size)
                throw std::exception();
            return _list[i];
        }
        Array<T>   &operator=(Array const & src)
        {
            if (_list)
                delete[] _list;
            this->_size = src._size;
            _list = new T[_size];
            for (size_t i = 0; i < _size; i++)
            {
                _list[i] = src._list[i];
            }
            return *this;
        };
        size_t     size(void) const { return this->_size; }
};

#endif