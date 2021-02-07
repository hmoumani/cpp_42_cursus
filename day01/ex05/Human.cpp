/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:08:32 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 15:08:34 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
    std::cout << "Human created" << std::endl;
}
Human::~Human()
{
    std::cout << "Human destroyed" << std::endl;
}

const Brain&    Human::getBrain() const
{
    return this->_brain;
}

std::string     Human::identify() const
{
    return _brain.identify();
}

