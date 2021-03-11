/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:01:23 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/11 17:01:27 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void)
{
    int rnd = rand() % 3;

    if (rnd == 0)
        return (new A());
    if (rnd == 1)
        return (new B());
    if (rnd == 2)
        return (new C());
    return NULL;
}

void identify_from_pointer(Base * p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a)
        std::cout << "A" << std::endl;
    if (b)
        std::cout << "B" << std::endl;
    if (c)
        std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return ;
    } catch(const std::exception& e) {}
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return ;
    } catch(const std::exception& e) {}
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return ;
    } catch(const std::exception& e) {}
    
}