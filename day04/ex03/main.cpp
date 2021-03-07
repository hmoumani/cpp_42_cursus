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
        Character *hmoumani = new Character("hmoumani");
        Character *test = new Character("test");
        hmoumani->equip(tmp); // cure at index 0
        tmp = src->createMateria("ice");
        hmoumani->equip(tmp); // ice at index 1
        tmp = src->createMateria("ice");
        hmoumani->equip(tmp); // ice at index 2
        hmoumani->use(0, *me);
        hmoumani->use(1, *bob);
        hmoumani->use(2, *hmoumani);
        *test = *hmoumani;
        test->use(0, *me);
        test->use(1, *bob);
        test->use(2, *hmoumani);   
        delete hmoumani;
        delete test;
        /*---------- End ----------*/
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        delete tmp;
    }
    return 0;
}

