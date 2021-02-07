/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:08:15 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 15:08:17 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
}
Brain::Brain(int size) : _size(size)
{
    std::cout << "Brain created" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain Destroyed" << std::endl;
}
std::string Brain::identify() const
{
    const void * address = static_cast<const void*>(this);
    std::stringstream ss;
    ss << address;  
    return ss.str();
}