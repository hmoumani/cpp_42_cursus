/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:27:28 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/11 16:27:30 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALZATION_HPP
# define SERIALZATION_HPP
# include <iostream>

typedef struct s_Data
{
    std::string str1;
    int         num;
    std::string str2;
}               Data;

void * serialize(void);
Data * deserialize(void * raw);
#endif