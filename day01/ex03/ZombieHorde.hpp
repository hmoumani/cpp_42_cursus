/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:53:51 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/06 18:53:52 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE
# define ZOMBIE_HORDE
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
    private:
        int		_number_zombie;
		Zombie	*_zombies;
    public:
        ZombieHorde();
        ZombieHorde(int number_zombie);
        ZombieHorde(int number_zombie, std::string type);
        ~ZombieHorde();
		void	announce();
};

#endif