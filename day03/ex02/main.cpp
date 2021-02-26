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
#include "ScavTrap.hpp"

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

	std::cout << std::endl << "**************************************" << std::endl << std::endl;
	ScavTrap scav("random");

	scav.rangedAttack("houssam");
	scav.meleeAttack("houssam");
	scav.takeDamage(50);
	scav.beRepaired(20);
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
	scav.challengeNewcomer("houssam");
}