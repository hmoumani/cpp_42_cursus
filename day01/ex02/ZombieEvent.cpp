/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:39:56 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/05 18:39:58 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    std::cout << "ZombieEvent created" << std::endl;
};

ZombieEvent::ZombieEvent(std::string zombie_type) : _zombie_type(zombie_type)
{
    std::cout << "ZombieEvent created" << std::endl;
};

ZombieEvent::~ZombieEvent()
{
    std::cout << "ZombieEvent destroyed" << std::endl;
};

void    ZombieEvent::setZombieType(std::string type)
{
    this->_zombie_type = type;
    std::cout << "zombieEvent type setted to : " << type << std::endl;
}   

Zombie*  ZombieEvent::newZombie(std::string name) const
{
    return (new Zombie(name, this->_zombie_type));
};

void    ZombieEvent::randomChump() const
{
    std::string str = "AAAAAA";
  	for (int i = 0; i < 6; i++)
    {
        str[i] = rand() % 26 + 64;
    }
	Zombie z = Zombie(str, this->_zombie_type);
    z.announce();
}