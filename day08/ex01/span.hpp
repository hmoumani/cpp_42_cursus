/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:14:52 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/13 12:14:55 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _vec;
    public:
        Span();
        Span(Span const & src);
        Span(unsigned int n);
        ~Span();
        Span    &operator=(Span const & src);
        void    addNumber(int);
        void    addNumber(std::vector<int> &);
        std::vector<int>::iterator begin();
        std::vector<int>::iterator end();
};

#endif