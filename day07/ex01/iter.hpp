/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:53:16 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/12 12:53:18 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template <typename T>
void    iter(T *list, int len, void (*f)(T const &))
{
    for (int i = 0;i < len; i++)
    {
        f(list[i]);
    }
}

#endif