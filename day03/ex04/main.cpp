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

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
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

		FragTrap temp = frag;
	}
	std::cout << std::endl << "**************************************" << std::endl << std::endl;
	{
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

		ScavTrap temp = scav;
	}
	std::cout << std::endl << "**************************************" << std::endl << std::endl;
	{
		NinjaTrap ninja("naruto");
		ClapTrap clap = ClapTrap();
		FragTrap frag("frag");
		ScavTrap scav("scav");

		ninja.takeDamage(50);
		ninja.beRepaired(20);
		ninja.ninjaShoebox(ninja);
		ninja.ninjaShoebox(clap);
		ninja.ninjaShoebox(frag);
		ninja.ninjaShoebox(scav);


		NinjaTrap temp = ninja;
	}
}