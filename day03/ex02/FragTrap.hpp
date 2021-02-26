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
		FragTrap(void);
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & src);
		~FragTrap();
		FragTrap    &operator=(FragTrap const & src);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
};

#endif

