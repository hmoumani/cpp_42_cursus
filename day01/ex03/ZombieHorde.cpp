/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:53:44 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/06 18:53:46 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int number_zombie, std::string type) : _number_zombie(number_zombie)
{
	std::cout << "creating Zombie Horde" << std::endl;
	_zombies = new Zombie[number_zombie];
	for (int i = 0; i < number_zombie; i++)
	{
		std::string str = "AAAAAA";
		for (int i = 0; i < 6; i++)
		{
			str[i] = std::rand() % 26 + 64;
		}
		_zombies[i].set_name(str);
		_zombies[i].set_type(type);
	}
	std::cout << "Zombie Horde created" << std::endl;
};
ZombieHorde::ZombieHorde(int number_zombie) : _number_zombie(number_zombie)
{
	std::cout << "creating Zombie Horde" << std::endl;
	_zombies = new Zombie[number_zombie];
	for (int i = 0; i < number_zombie; i++)
	{
		std::string str = "AAAAAA";
		for (int i = 0; i < 6; i++)
		{
			str[i] = std::rand() % 26 + 64;
		}
		_zombies[i].set_name(str);
		_zombies[i].set_type("Zombie");
	}
	std::cout << "Zombie Horde created" << std::endl;
};

ZombieHorde::~ZombieHorde()
{
	std::cout << "destroying Zombie Horde" << std::endl;
	delete [] _zombies;
	std::cout << "Zombie Horde destroyed" << std::endl;
};

void		ZombieHorde::announce()
{
	for (int i = 0; i < _number_zombie; i++)
	{
		_zombies[i].announce();
	}
};

