/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:22:45 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:22:47 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    std::cout << std::endl << "    **********************     " << std::endl << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        delete tmp;
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        /*---------- My tests ----------*/
        Character *mbani = new Character("mbani");
        Character *mamoussa = new Character("mamoussa");
        mbani->equip(tmp); // cure at index 0
        tmp = src->createMateria("ice");
        mbani->equip(tmp); // ice at index 1
        tmp = src->createMateria("ice");
        mbani->equip(tmp); // ice at index 2
        mbani->use(0, *me);
        mbani->use(1, *bob);
        mbani->use(2, *mbani);
        *mamoussa = *mbani;
        mamoussa->use(0, *me);
        mamoussa->use(1, *bob);
        mamoussa->use(2, *mbani);   
        delete mbani;
        delete mamoussa;
        /*---------- End ----------*/
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        delete tmp;
    }
    return 0;
}

