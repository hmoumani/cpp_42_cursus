/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:38:47 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/28 10:38:48 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Human.hpp"

int main()
{
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    std::cout << std::endl << "********************************" << std::endl;
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Human james("james");
        std::cout << robert << jim << james;
        robert.polymorph(jim);
        robert.polymorph(james);
    }
    return 0;
}
