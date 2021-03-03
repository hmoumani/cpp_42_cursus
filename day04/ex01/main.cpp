/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:14:41 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:14:44 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "M4.hpp"
#include "Noob.hpp"

int main()
{
    {
        Character* me = new Character("me");
        std::cout << *me;
        Enemy* b = new RadScorpion();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();
        me->equip(pr);
        std::cout << *me;
        me->equip(pf);
        me->attack(b);
        std::cout << *me;
        me->equip(pr);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
    }
    std::cout << "    ******************************************" << std::endl;
    {
        Character* me = new Character("me again");
        std::cout << *me;
        Enemy* b = new Noob();
        AWeapon* pr = new M4();
        me->equip(pr);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
        me->equip(pr);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
    }
    return 0;
}
