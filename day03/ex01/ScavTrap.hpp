/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:54:41 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/26 16:54:46 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap
{
    private:
        int _hit_point;
		int _max_hit_point;
		int _energy_points;
		int _max_energy_points;
		int _level;
		std::string _name;
		int _melee_damage;
		int _ranged_attack_damage;
		int _armor_damage;
    public:
        ScavTrap(void);
		ScavTrap(std::string const & name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();
		ScavTrap    &operator=(ScavTrap const & src);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        void challengeNewcomer(std::string const & target);
};

#endif
