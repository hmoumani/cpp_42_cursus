/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:38:31 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/28 10:38:34 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
    std::cout << "Human is born." << std::endl;
}

Human::Human(std::string const & name) : Victim(name)
{
    std::cout << "Human is born." << std::endl;
}

Human::Human(Human const & src)
{
    *this = src;
    std::cout << "Human is born." << std::endl;
}

Human::~Human()
{
    std::cout << "Human is gone..." << std::endl;
}

Human&   Human::operator=(Human const & src)
{
    this->_name = src._name;
    return *this;
}

void    Human::getPolymorphed() const
{
    std::cout << _name << " has been turned into a flying bird!" << std::endl;
}
