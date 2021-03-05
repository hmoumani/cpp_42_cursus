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
#include "Form.hpp"

int main()
{
    std::cout << "creating Form with low grade" << std::endl << std::endl;
    try
    {
        Form form("default", 180, 160);
    }
    catch(std::exception &e)
    {
        std::cout << "\t" << e.what() << std::endl;
    }

    std::cout << "creating Form with high grade" << std::endl << std::endl;
    try
    {
        Form form("default", 0, 0);
    }
    catch(std::exception &e)
    {
        std::cout << "\t" << e.what() << std::endl;
    }

    std::cout << "creating Form with safe grade" << std::endl << std::endl;
    try
    {
        Form form("default", 20, 70);
        std::cout << "\tdone" << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "\t" << e.what() << std::endl;
    }
    std::cout << "*********************" << std::endl;
    {
        Form form("default", 20, 70);
        Bureaucrat bur("bureaucrat", 80);

        std::cout << form << std::endl;
        std::cout << "signing Form with not enough grade : " << std::endl << std::endl;
        bur.signForm(form);
        std::cout << form << std::endl;
    }
    std::cout << "*********************" << std::endl;
    {
        Form form("default", 20, 70);
        Bureaucrat bur("bureaucrat", 10);
        std::cout << form << std::endl;
        std::cout << "signing Form with enough grade :" << std::endl << std::endl;
        bur.signForm(form);
        std::cout << form << std::endl;
    }



}