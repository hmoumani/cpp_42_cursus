/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 10:40:59 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/26 10:41:03 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>

class FragTrap
{
    private:
        int _hit_point = 100;
        int _max_hit_point = 100;
        int _energy_points = 100;
        int _max_energy_points = 100;
        int _level = 1;
        std::string _name;
        int _melee_damage = 30;
        int _ranged_attack_damage = 20;
        int _armor_damage = 5;
    public:
        FragTrap(void);
        FragTrap(FragTrap const & src);
        ~FragTrap();
        FragTrap    &operator=(FragTrap const & src);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif

