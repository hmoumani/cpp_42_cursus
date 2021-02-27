/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:13:01 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/26 18:13:03 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
class ClapTrap
{
    protected:
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
        ClapTrap();
        ClapTrap(int _hit_point, int _max_hit_point, int _energy_points,
        int _max_energy_points, int _level, std::string _name,
        int _melee_damage, int _ranged_attack_damage, int _armor_damage);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();
        void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
