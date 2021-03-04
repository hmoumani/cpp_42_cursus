/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:14:03 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/03 18:14:05 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\ttesting with high grade" << std::endl;
    try
    {
        Bureaucrat bur("default", 0);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\ttesting with low grade" << std::endl;
    try
    {
        Bureaucrat bur("default", 200);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\tmaking the grade more higher" << std::endl;
    try
    {
        Bureaucrat  bur("hello", 10);
        for(;;)
        {
            bur.increment();
            std::cout << bur << std::endl;
        }
    }
    catch (std::exception   & e)
    {
        std::cout << e.what() <<std::endl;
    }

    std::cout << "\tmaking the grade more low" << std::endl;
    try
    {
        Bureaucrat  bur("hello", 130);
        for(;;)
        {
            bur.decrement();
            std::cout << bur << std::endl;
        }
    }
    catch (std::exception   & e)
    {
        std::cout << e.what() <<std::endl;
    }

}