/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:27:24 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/11 16:27:25 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

std::string  get_str(int  n)
{
    std::string ret;
    const char  list[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    ret.reserve(n);

    for (int i = 0; i < n; i++)
    {
        ret += list[rand() % (sizeof(list) - 1)];
    }
    return ret;
}

void * serialize(void)
{
    Data *ret = new Data;

    ret->str1 = get_str(8);
    ret->num = rand();
    ret->str2 = get_str(8);

    return (reinterpret_cast<void *>(ret));
}

Data * deserialize(void * raw) {
    return (reinterpret_cast<Data *>(raw));
}