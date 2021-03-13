/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:14:09 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/12 18:14:12 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <queue>
#include <iostream>

int main(void) {

    {
        std::vector<int> vect;

        vect.push_back(1337);
        vect.push_back(42);
        vect.push_back(19);
        vect.push_back(21);

        std::vector<int>::iterator finded = easyfind(vect, 1337);

        if (finded != vect.end())
            std::cout << "easyfind(vect, 1337) -->> success" << std::endl;
        else 
            std::cout << "easyfind(vect, 1337) -->> failed" << std::endl;

    }

    {
        std::list<int> llist;

        llist.push_back(1337);
        llist.push_back(42);
        llist.push_back(19);
        llist.push_back(21);

        std::list<int>::iterator finded = easyfind(llist, 139);

        if (finded != llist.end())
            std::cout << "easyfind(llist, 139) -->> success" << std::endl;
        else 
            std::cout << "easyfind(llist, 139) -->> failed" << std::endl;
    }

    return (0);
}