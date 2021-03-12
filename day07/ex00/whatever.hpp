/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 09:53:39 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/12 09:53:41 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
template <typename T>
T   &min(T & p1, T & p2)
{
    return (p1 < p2 ? p1 : p2);
}

template <typename T>
T   &max(T & p1, T & p2)
{
    return (p1 > p2 ? p1 : p2);
}

template <typename T>
void    swap(T & p1, T & p2)
{
    T temp;

    temp = p1;
    p1 = p2;
    p2 = temp;
}

#endif
