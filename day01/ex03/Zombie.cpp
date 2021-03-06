/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:39:21 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/05 18:39:25 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created" << std::endl;
};

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
    std::cout << "Zombie : " << name << " created" << std::endl;
};

Zombie::~Zombie()
{
    std::cout << "Zombie : " << this->_name << " killed" << std::endl;
};

void Zombie::announce() const
{
    std::cout << "<" << this->_name << " (" << this->_type << ")> give me some Braiiiiiiinnnssss... " << std::endl;
};

std::string	Zombie::get_type() const
{
    return this->_type;
}
std::string	Zombie::get_name() const
{
    return this->_name;
}
void		Zombie::set_type(std::string type)
{
    this->_type = type;
}
void		Zombie::set_name(std::string name)
{
    this->_name = name;
}