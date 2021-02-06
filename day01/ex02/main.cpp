/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:40:23 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/05 18:40:25 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    std::cout << "creating Zombie : " << std::endl;
    Zombie z("Laarbi", "manager");
    std::cout << "announcing the created Zombie : " << std::endl;
    z.announce();
    std::cout << "creating ZombieEvent : " << std::endl;
    ZombieEvent event;
    std::cout << "setting type to sudo : " << std::endl;
    event.setZombieType("sudo");
    std::cout << "creating Zombie using newZombie : " << std::endl;
    Zombie *zombie_p = event.newZombie("Terrab");
    zombie_p->announce();
    std::cout << "deleting the allocated zombie : " << std::endl;
    delete zombie_p;
    std::cout << "creating Zombie using randomChump : " << std::endl;
    event.randomChump();
}