/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:16:54 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:16:57 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* tom;

    Squad* vlc = new Squad;
    Squad* copy = new Squad;

    vlc->push(bob);
    vlc->push(jim);
    std::cout << "VLC has " << vlc->getCount() << std::endl;
    vlc->getUnit(1)->rangedAttack();
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    *copy = *vlc;
    for (int i = 0; i < copy->getCount(); ++i)
    {
        ISpaceMarine* cur = copy->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    tom = bob->clone();
    tom->battleCry();
    delete vlc;
    delete copy;
    return 0;
}
