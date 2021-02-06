/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:40:09 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/05 18:40:11 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT
# define ZOMBIE_EVENT
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string _zombie_type;
		
    public:
        ZombieEvent();
        ZombieEvent(std::string zombie_type);
        ~ZombieEvent();
        void    setZombieType(std::string type);
        Zombie*	newZombie(std::string name) const;
		void	randomChump() const;
};

#endif