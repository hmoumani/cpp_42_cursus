/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 10:41:12 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/26 10:41:14 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag("dump_robot");

	frag.rangedAttack("houssam");
	frag.meleeAttack("houssam");
	frag.takeDamage(50);
	frag.beRepaired(20);
	frag.vaulthunter_dot_exe("houssam");
	frag.vaulthunter_dot_exe("houssam");
	frag.vaulthunter_dot_exe("houssam");
	frag.vaulthunter_dot_exe("houssam");
	frag.vaulthunter_dot_exe("houssam");
}